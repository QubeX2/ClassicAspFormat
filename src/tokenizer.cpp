//
// Author: Mikael Andersson 
//
#include "tokenizer.hpp"

namespace ClassicAspFormat {

    std::string getFileContents(const char *filename)
    {
        std::ifstream in(filename, std::ios::in | std::ios::binary);
        if (in) {
            std::ostringstream contents;
            contents << in.rdbuf();
            in.close();
            return(contents.str());
        }
        throw(errno);
    }


    std::vector<Token> Tokenizer::parse(const std::string &content) 
    {
        std::vector<Token> tokens;

        for(char ch : content) {
            std::cout << ch;
        }

        return tokens;
    }
}