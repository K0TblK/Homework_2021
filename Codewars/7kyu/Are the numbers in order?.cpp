bool isAscOrder(std::vector<int> arr)
{
     int counter = 0;
     for (size_t i = 0; i < size_t(arr.size() - 1); ++i){
       if ( arr[i] < arr[i + 1] ) {
         ++counter;
       }  
     }
  if (counter == int(arr.size()) - 1)
    return true;
  else 
    return false;
}
