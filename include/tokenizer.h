#pragma once
/**
 * Author: Mikael Andersson
 * License: MIT
 */

#include <vector>
#include <string>

namespace ClassicAspFormat {

    enum TokenType {
        WHITESPACE,
        IDENTIFIER,
        INTEGER_LITERAL,
        STRING_LITERAL,
    };

    class Token {

    };
    
    class Tokenizer {
        public:
            std::vector<Token> parse(const std::string &content);
    };
}