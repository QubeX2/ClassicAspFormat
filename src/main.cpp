#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cerrno>
#include "tokenizer.hpp"

namespace caf = ClassicAspFormat;

int main()
{
  caf::Tokenizer tnz;
  std::string content = caf::getFileContents("/home/mikael/Projects/files/classic-asp/Orders.asp");
  std::vector<caf::Token> tokens = tnz.parse(content);
}

