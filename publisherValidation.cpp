#include <iostream>
#include <string>
#include <regex>

bool publisherValidation(std::string & word){
  std::regex format("^(([A-Z][a-z]*(.)?)|([A-Z])*\\s)*(([A-Z][a-z]*(.)?)|([A-Z])*)+$");

  return std::regex_match(word,format);
}

int main(int argc, char const *argv[]) {
  std::string word;
  std::cout<<"Enter an publisher> ";
  std::getline(std::cin,word);

  if(publisherValidation(word)){
    std::cout << word << " Valid" << std::endl;
  }
  else{
    std::cout << word << " Invalid" << std::endl;
  }
  return 0;
}
