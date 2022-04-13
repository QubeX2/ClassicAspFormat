#pragma once

#include "parse.hpp"

namespace ClassicAspFormat {

    enum ParseStateCss
    {
    };

    class ParseCss : Parse 
    {
    public:
        std::vector<Token> parse(const std::string &content);
        
    };

}