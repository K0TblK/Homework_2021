#include <string>
int find_short(std::string str)
{
  int minLength=str.length();
  for (int i=0; i< (int)str.length(); ++i){
    int currLength = 0;
    while(str[i] != ' ' && i<(int)str.length()){
      ++currLength;
      ++i;
    }
    if (currLength < minLength){
      minLength = currLength;
    }
  }
  return minLength;
}
