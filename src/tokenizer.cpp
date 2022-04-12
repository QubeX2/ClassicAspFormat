//
// Author: Mikael Andersson 
//
#include "tokenizer.hpp"

namespace ClassicAspFormat {

    std::string getFileContents(const char *filename)
    {
        std::ifstream in(filename, std::ios::in | std::ios::binary);
        if (in) {
            std::ostringstream contents;
            contents << in.rdbuf();
            in.close();
            return(contents.str());
        }
        throw(errno);
    }

    void debugPrint(const std::vector<Token> &tokens, int state, int count)
    {
        int rows = 0;
        for(auto t : tokens) {
            if(state == 0 || state == t.state) {
                std::cout << "Type: " << t.state << ", Text: " << t.text << std::endl;
                rows++;
            }
            if(count > 0 && rows == count) {
                break;
            }
        }
    }

    std::vector<Token> Tokenizer::parse(const std::string &content) 
    {
        std::vector<Token> tokens;
        Token t;

        for(char ch : content) {
            switch(ch) {
                case '\'':
                    if(t.state == ASP_START) {
                        t.state == ASP_COMMENT;
                        t.text.append(1, ch);
                    }
                    break;

                case '<':
                    if(t.state == WHITESPACE) {
                        t.state = LEFT_SIGN;
                        t.text.append(1, ch);
                    }
                    break;

                case '%':
                    if(t.state == LEFT_SIGN) {
                        t.state = ASP_START;
                        t.text.append(1, ch);
                    }
                    break;

                case '=':
                    if(t.state == ASP_START) {
                        t.state = DISPLAY_EXP;
                        t.text.append(1,ch);
                        appendToken(t, tokens);
                    }
                    break;

                case '!':
                    if(t.state == LEFT_SIGN) {
                        t.state = P_HTML_START_COMMENT;
                        t.text.append(1, ch);                        
                    }
                    break;

                case '-':
                    if(t.state == P_HTML_START_COMMENT || t.state == HTML_COMMENT) {                        
                        t.text.append(1, ch); 
                        if(t.state == HTML_COMMENT) {
                            t.state = HTML_COMMENT_TEXT;
                        } else {
                            t.state = HTML_COMMENT;
                        }
                    } else if(t.state == HTML_COMMENT_TEXT || t.state == P_HTML_END_COMMENT) {
                        t.state = P_HTML_END_COMMENT;
                        t.text.append(1, ch);
                    }
                    break;

                case '>':
                    if(t.state == P_HTML_END_COMMENT) {
                        t.text.append(1, ch);
                        appendToken(t, tokens);
                    }
                    break;


                case ' ':
                case '\t':
                    /*
                    if(t.state != HTML_COMMENT_TEXT && t.state != P_HTML_END_COMMENT && t.state != ASP_COMMENT && t.state != ASP_START) {
                        appendToken(t, tokens);
                    } else {
                        t.text.append(1, ch);   
                    } */
                    t.text.append(1, ch);
                    break;

                case '\r':
                case '\n':
                    if(t.state == ASP_COMMENT) {
                        appendToken(t, tokens);
                    } else {
                        t.text.append(1, ch);
                    }
                    break;

                default:
                    if(t.state == HTML_COMMENT || t.state == HTML_COMMENT_TEXT || t.state == P_HTML_END_COMMENT) {
                        t.state = HTML_COMMENT_TEXT;
                        t.text.append(1, ch);
                    } else if(t.state == ASP_COMMENT) {
                        t.text.append(1, ch);
                    } else {
                        t.text.append(1, ch);
                    }

                    break;
                    
            }
        }

        return tokens;
    }

    void Tokenizer::appendToken(Token &token, std::vector<Token> &tokens)
    {
        if(token.state != WHITESPACE) {
            tokens.push_back(token);
        }
        token.state = WHITESPACE;
        token.text.erase();
    }

}