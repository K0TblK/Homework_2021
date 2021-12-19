#include <string>

std::string createPhoneNumber(const int arr [10]){
  std::string STR;
  STR = "(";
  for (int i = 0; i < 3; ++i){
    STR += std:: to_string(arr[i]);
  }
  STR+=") ";
   for (int i = 3; i < 6; ++i){
    STR += std:: to_string(arr[i]);
  }
  STR+="-";
   for (int i = 6; i < 10; ++i){
    STR += std:: to_string(arr[i]);
  }
  return STR;
}
