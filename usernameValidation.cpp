#include <iostream>
#include <string>
#include <regex>

bool usernameValidation(std::string & word){
  std::regex format("^[[:alnum:]]+((-|_)?[[:alnum:]]+)*$");

  return std::regex_match(word,format);
}

int main(int argc, char const *argv[]) {
  std::string word;
  std::cout<<"Enter an username> ";
  std::getline(std::cin,word);

  if(usernameValidation(word)){
    std::cout << word << " Valid" << std::endl;
  }
  else{
    std::cout << word << " Invalid" << std::endl;
  }
  return 0;
}
