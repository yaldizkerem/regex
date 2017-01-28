#include <iostream>
#include <string>
#include <regex>

bool adressValidation(std::string & word){
  std::regex format("^((([A-Z][a-z]+)|([0-9]+))(((,)|(.)\\s)|((/)|(:))|(\\s)))*(([A-Z][a-z]+)|([0-9]+))$");

  return std::regex_match(word,format);
}

int main(int argc, char const *argv[]) {
  std::string word;
  std::cout<<"Enter an adress> ";
  std::getline(std::cin,word);

  if(adressValidation(word)){
    std::cout << word << " Valid" << std::endl;
  }
  else{
    std::cout << word << " Invalid" << std::endl;
  }
  return 0;
}
