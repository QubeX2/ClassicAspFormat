#pragma once
//
// Author: Mikael Andersson
// License: MIT
//
#include "types.hpp"

namespace ClassicAspFormat {

    class ParseAsp : public Parse 
    {
    public:
        std::vector<Token> parse(const std::string &content);
        
    };

}