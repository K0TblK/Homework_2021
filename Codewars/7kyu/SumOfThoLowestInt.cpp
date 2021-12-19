#include <vector>
long sumTwoSmallestNumbers(std::vector<int> numbers)
{
  for(int i = 0; i < (int)(numbers.size() - 1); ++i){
     for(int i = 0; i < (int)(numbers.size() - 1); ++i){
    if (numbers[i] > numbers[i + 1]) {
      int temp=numbers[i];
      numbers[i]= numbers[i + 1];
      numbers[i + 1] = temp;
    } 
    }
  }
  return (long int)(numbers[0]) + (long int)(numbers[1]);
}
