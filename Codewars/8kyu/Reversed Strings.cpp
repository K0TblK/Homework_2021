#include <string>
using namespace std ;

string reverseString (string str )
{

  string revsStr = "";
  for (int i = str.length()-1; i >= 0; i--){
      revsStr += str[i];
  }

  return revsStr;
}
