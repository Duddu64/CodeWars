/*
Write an algorithm that takes an array and moves all of the zeros to the end, preserving the order of the other elements.

move_zeros({1, 0, 1, 2, 0, 1, 3}) // returns {1, 1, 2, 1, 3, 0, 0})
*/
#include <vector>

std::vector<int> move_zeroes(const std::vector<int>& input) {
  std::vector<int>aux;
  int cont=0;
  for(auto &num:input){
    if(num!=0){
      aux.push_back(num);
    }else{
      cont++;
    }
  }
  if(cont>0)aux.insert(aux.end(), cont, 0);

  return aux;
}
