#include <iostream>
#include <string>
#include <regex>

bool typeValidation(std::string & word){
  std::regex format("^((\\+90)|(0))?5[0-9]{9}$");

  return std::regex_match(word,format);
}

int main(int argc, char const *argv[]) {
  std::string word;
  std::cout<<"Enter an type> ";
  std::getline(std::cin,word);
  std::string::iterator end_pos = std::remove(word.begin(), word.end(), ' ');
  word.erase(end_pos, word.end());

  if(typeValidation(word)){
    std::cout << word << " Valid" << std::endl;
  }
  else{
    std::cout << word << " Invalid" << std::endl;
  }
  return 0;
}
