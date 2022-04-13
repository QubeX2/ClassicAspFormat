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

#include "parseasp.hpp"
#include "parsejs.hpp"
#include "parsehtml.hpp"
#include "parsecss.hpp"

namespace ClassicAspFormat {

    enum ParserState 
    {
        HTML,
        CSS,
        JAVSCRIPT,
        ASP,
    };

    class Token 
    {
    public:
        enum ParserState state {HTML};
    };
    
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