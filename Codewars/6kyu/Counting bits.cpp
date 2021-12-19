unsigned int countBits(unsigned long long n){
  int k = 0;
  int digit;
  while(n != 0){
    digit = n % 2;
    n /= 2;
    if(digit == 1){
      ++k;
    }
  }
  return k;
}
