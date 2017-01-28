#include <iostream>
#include <string>
#include <regex>
#include <iterator>

bool expirationDateValidation(std::string & word){
  std::regex format("^(([0-2]?[0-9])|(3[0-1]))(.|:|/|-)((0?[0-9])|(1[0-2]))(.|:|/|-)((201[7-9])|(202[0-9]))$");

  return std::regex_match(word,format);
}

int main(int argc, char const *argv[]) {
  std::string word;
  std::cout<<"Enter an expiration date> ";
  std::getline(std::cin,word);
  std::string::iterator end_pos = std::remove(word.begin(), word.end(), ' ');
  word.erase(end_pos, word.end());

  if(expirationDateValidation(word)){
    std::cout << word << " Valid" << std::endl;
  }
  else{
    std::cout << word << " Invalid" << std::endl;
  }
  return 0;
}
