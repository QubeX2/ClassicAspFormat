#pragma once
//
// Author: Mikael Andersson
// License: MIT
//
#include "types.hpp"

namespace ClassicAspFormat {

    class Token 
    {
    public:
        enum State::Code codeState {State::Code::WHITESPACE};
        enum State::Mode mode {State::Mode::HTML};
    };

    class Parse 
    {
    public:
        virtual std::vector<Token> parse(const std::string &content) = 0;
    };
}