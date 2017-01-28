#include <iostream>
#include <string>
#include <regex>

bool nameValidation(std::string & word){
  std::regex format("^([A-Z](.|([a-z]+))\\s)*[A-Z](.|([a-z]+))$");

  return std::regex_match(word,format);
}

int main(int argc, char const *argv[]) {
  std::string word;
  std::cout<<"Enter an name> ";
  std::getline(std::cin,word);

  if(nameValidation(word)){
    std::cout << word << " Valid" << std::endl;
  }
  else{
    std::cout << word << " Invalid" << std::endl;
  }
  return 0;
}
