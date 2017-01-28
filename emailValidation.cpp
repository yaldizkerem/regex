#include <iostream>
#include <string>
#include <regex>

bool emailValidation(std::string & word){
  std::regex format("[[:alnum:]]+((.)?[[:alnum:]]+)*@[[:alnum:]]+(.[[:alnum:]]+)+");

  return std::regex_match(word,format);
}

int main(int argc, char const *argv[]) {
  std::string word;
  std::cout<<"Enter an email adress> ";
  std::getline(std::cin,word);

  if(emailValidation(word)){
    std::cout << word << " Valid" << std::endl;
  }
  else{
    std::cout << word << " Invalid" << std::endl;
  }
  return 0;
}
