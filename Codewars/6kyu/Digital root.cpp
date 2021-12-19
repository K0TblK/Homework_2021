int digital_root(int n)
{
  int digit;
  int s = 0;
  while(n > 9){
    while(n != 0){
      digit = n % 10;
      n /= 10;
      s += digit;
    }
    n = s;
    s = 0;
  }
  return n;
}
