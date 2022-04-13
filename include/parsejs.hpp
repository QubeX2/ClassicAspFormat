#pragma once
//
// Author: Mikael Andersson
// License: MIT
//
#include "types.hpp"

namespace ClassicAspFormat {

    class ParseJs : public Parse 
    {
    public:
        std::vector<Token> parse(const std::string &content);
        
    };

}