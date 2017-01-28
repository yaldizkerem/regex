#include <iostream>
#include <string>
#include <regex>

bool typeValidation(std::string & word){
  std::regex format("^[A-Z][a-z]+$");

  return std::regex_match(word,format);
}

int main(int argc, char const *argv[]) {
  std::string word;
  std::cout<<"Enter an type> ";
  std::getline(std::cin,word);

  if(typeValidation(word)){
    std::cout << word << " Valid" << std::endl;
  }
  else{
    std::cout << word << " Invalid" << std::endl;
  }
  return 0;
}
