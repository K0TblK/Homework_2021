#include <string>

bool isAnagram(std::string test, std::string original){
  if(test.length() != original.length()){
    return false;
  }
  int arr1[26]={};
  int arr2[26]={};
  char a, b;
  for(int i = 0; i < test.length(); ++i){
    a = std::tolower(test[i]);
    b = std::tolower(original[i]);
    
    arr1[int(a) - 'a'] += 1;
    arr2[int(b) - 'a'] += 1;
    
  }
  for(int i = 0; i < 26; ++i){
    if(arr1[i] != arr2[i]){
      return false;
    }
  }
  return true;
}
