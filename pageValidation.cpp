#include <iostream>
#include <string>
#include <regex>

bool pageValidation(std::string & word){
  std::regex format("^[1-9][0-9]*$");

  return std::regex_match(word,format);
}

int main(int argc, char const *argv[]) {
  std::string word;
  std::cout<<"Enter an page> ";
  std::getline(std::cin,word);

  if(pageValidation(word)){
    std::cout << word << " Valid" << std::endl;
  }
  else{
    std::cout << word << " Invalid" << std::endl;
  }
  return 0;
}
