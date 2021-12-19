std::string get_middle(std::string input) 
{
  if (input.length() % 2 == 0){
    int n = input.length()/2;
    return input.substr(n-1,2);
  }else {
    int n = input.length()/2;
    return input.substr(n,1);
  }
}
