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
            /*
            if(state == 0 || state == t.state) {
                std::cout << "Type: " << t.state << ", Text: " << t.text << std::endl;
                rows++;
            }
            if(count > 0 && rows == count) {
                break;
            } */
        }
    }

    std::vector<Token> Tokenizer::parse(const std::string &content) 
    {
        std::vector<Token> tokens;
        Token t;

        for(char ch : content) {
            switch(ch) {
                default:
                    break;
            }
        }

        return tokens;
    }

    void Tokenizer::appendToken(Token &token, std::vector<Token> &tokens)
    {
        /*
        if(token.state != WHITESPACE) {
            tokens.push_back(token);
        }
        token.state = WHITESPACE;
        token.text.erase(); */
    }

}