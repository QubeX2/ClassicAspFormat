#pragma once

#include "parse.hpp"

namespace ClassicAspFormat {

    enum ParseStateAsp
    {
    };

    class ParseAsp : Parse 
    {
    public:
        std::vector<Token> parse(const std::string &content);
        
    };

}