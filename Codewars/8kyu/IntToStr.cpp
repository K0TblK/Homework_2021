#include <string>
std::string number_to_string(int num){
  std::string answer = "";
  bool sign = num < 0;
  num = sign ? -num : num;
  do {
    int digit = num % 10;
    answer = (char)(digit+48) + answer;
    num /= 10;
    } while (num > 0);
    return sign ? "-" + answer : answer;
}
