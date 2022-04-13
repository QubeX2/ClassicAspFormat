#pragma once

#include "parse.hpp"

namespace ClassicAspFormat {

    enum ParseStateJs
    {
    };

    class ParseJs : Parse 
    {
    public:
        std::vector<Token> parse(const std::string &content);
        
    };

}