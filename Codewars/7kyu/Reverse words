#include <string>

std::string reverse_words (std::string str){
  std::string revWords = "";
  std::string temp="";
  for (int i=0; i<(int)str.length(); ++i){
    
    if(str[i] != ' '){
      temp.push_back(str[i]);
    }else {
      while(!temp.empty()){
        revWords.push_back(temp.back());
        temp.pop_back();
      }
      revWords+=" ";
    }
  }
  while(!temp.empty()){
        revWords.push_back(temp.back());
        temp.pop_back();
      }
  return revWords;
}
