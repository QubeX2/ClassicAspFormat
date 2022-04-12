#include <fstream>
#include <sstream>
#include <string>
#include <cerrno>
#include "tokenizer.h"

int main()
{

}

std::string getFileContents(const char *filename)
{
  std::ifstream in(filename, std::ios::in | std::ios::binary);
  if (in)
  {
    std::ostringstream contents;
    contents << in.rdbuf();
    in.close();
    return(contents.str());
  }
  throw(errno);
}