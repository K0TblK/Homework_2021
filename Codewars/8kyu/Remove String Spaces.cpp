std::string no_space(std::string x)
{
  int count = 0;
  std::string str;
  for (int i = 0; x[i]; i++){
    if (x[i] != ' ')
      str += x[i];
    }

  return str;
}
