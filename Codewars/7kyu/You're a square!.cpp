bool is_square(int n)
{
for(size_t i = 0; i <= (n/2 + 1); ++i){
  if ((i*i) == n){
      return true;
  }
}
return false;
