#pragma once
//
// Author: Mikael Andersson
// License: MIT
//
#include "types.hpp"
#include "parse.hpp"
#include "parsehtml.hpp"
#include "parsecss.hpp"
#include "parsejs.hpp"
#include "parseasp.hpp"

namespace ClassicAspFormat {

    class Tokenizer 
    {
    public:
        std::vector<Token> parse(const std::string &content);

    private:
        ParseAsp parseAsp;
        ParseHtml parseHtml;
        ParseJs parseJs;
        ParseCss parseCss;
        void appendToken(Token &token, std::vector<Token> &tokens);
    };

    std::string getFileContents(const char *filename);
    void debugPrint(const std::vector<Token> &tokens, int state = 0, int count = 0);

}