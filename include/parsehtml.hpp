#pragma once

#include "parse.hpp"

namespace ClassicAspFormat {

    enum ParseStateHtml
    {
    };

    class ParseHtml : Parse 
    {
    public:
        std::vector<Token> parse(const std::string &content);
        
    };

}