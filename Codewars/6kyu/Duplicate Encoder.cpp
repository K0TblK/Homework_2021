#include <string>
std::string duplicate_encoder(const std::string& word){
  std::string answer = "";
  for (int i=0; i< (int)word.length();++i){
    answer+="(";
  }
  for(int i = 0; i < (int)word.length() ; ++i){
    for(int k = 0;  (k < (int)word.length()); ++k){
      if(k!=i){
        if (std::tolower(word[i]) == std::tolower(word[k])) {
          answer[k]=')';
        }
      }
    }
  }
  return answer;
}
