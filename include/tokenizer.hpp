#pragma once
//
// Author: Mikael Andersson
// License: MIT
//

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <cerrno>

namespace ClassicAspFormat {

    enum TokenState 
    {
        WHITESPACE, //                  0
        LEFT_SIGN, // <                 1
        RIGHT_SIGN, // >                2
        ASP_START, // <%                3
        ASP_COMMENT, // '               4
        DISPLAY_EXP, // <%=             5
        P_HTML_START_COMMENT, // <!     6
        HTML_COMMENT, // <!--           7
        P_HTML_END_COMMENT, // -->      8
        HTML_COMMENT_TEXT, //           9
    };

    class Token 
    {
    public:
        enum TokenState state {WHITESPACE};
        std::string text;
    };
    
    class Tokenizer 
    {
    public:
        std::vector<Token> parse(const std::string &content);
    private:
        void appendToken(Token &token, std::vector<Token> &tokens);
    };

    std::string getFileContents(const char *filename);
    void debugPrint(const std::vector<Token> &tokens, int state = 0, int count = 0);

}