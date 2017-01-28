#include <iostream>
#include <string>
#include <regex>

bool musicTypeValidation(std::string & word){
  std::regex format("^((([A-Z][a-z]+)|([A-Z]+))('n)?\\s)*([A-Z][a-z]+)|([A-Z]+)$");

  return std::regex_match(word,format);
}

int main(int argc, char const *argv[]) {
  std::string word;
  std::cout<<"Enter an music type> ";
  std::getline(std::cin,word);

  if(musicTypeValidation(word)){
    std::cout << word << " Valid" << std::endl;
  }
  else{
    std::cout << word << " Invalid" << std::endl;
  }
  return 0;
}
