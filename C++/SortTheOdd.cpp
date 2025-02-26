/*
Problem
You will be given an array of numbers. You have to sort the odd numbers in ascending order while leaving the even numbers at their original positions.

[7, 1]  =>  [1, 7]
[5, 8, 6, 3, 4]  =>  [3, 8, 6, 5, 4]
[9, 8, 7, 6, 5, 4, 3, 2, 1, 0]  =>  [1, 8, 3, 6, 5, 4, 7, 2, 9, 0]
*/
class Kata
{

  public:
    std::vector<int> sortArray(std::vector<int> array)
    {
      std::vector<int>aux;
      std::vector<int>impar;
      for(int i=0; i<array.size();i++){
        if(array.at(i)%2!=0)
        {
          impar.push_back(array.at(i));
        }
      }
      std::sort(impar.begin(), impar.end());
      int cont=0;
      for(int i=0; i<array.size();i++){
        if(array.at(i)%2!=0)
        {
          aux.push_back(impar.at(cont));
          cont++;
        }else{
          aux.push_back(array.at(i));
        }
      }
      return aux;
    }
};
