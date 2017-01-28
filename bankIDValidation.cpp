#include <iostream>
#include <string>
#include <regex>
#include <iterator>

bool bankIDValidation(std::string & word){
  std::regex format("^[0-9]{16}$");

  return std::regex_match(word,format);
}

int main(int argc, char const *argv[]) {
  std::string word;
  std::cout<<"Enter an bankID> ";
  std::getline(std::cin,word);
  std::string::iterator end_pos = std::remove(word.begin(), word.end(), ' ');
  word.erase(end_pos, word.end());

  if(bankIDValidation(word)){
    std::cout << word << " Valid" << std::endl;
  }
  else{
    std::cout << word << " Invalid" << std::endl;
  }
  return 0;
}
