#include <string>
bool XO(const std::string& str)
{
  int ohs=0; int xs=0;
  for (int i=0; i<(int)str.length(); ++i){
    if (std::tolower(str[i])=='x'){
      ++xs;
    } else if (std::tolower(str[i])=='o'){
      ++ohs;
    }
  }
  if (ohs==xs){
    return true;
  }
  return false;
}
