/*
ROT13 is a simple letter substitution cipher that replaces a letter with the letter 13 letters after it in the alphabet. ROT13 is an example of the Caesar cipher.

Create a function that takes a string and returns the string ciphered with Rot13. If there are numbers or special characters included in the string, they should be returned as they are. Only letters from the latin/english alphabet should be shifted, like in the original Rot13 "implementation".
*/
#include <string>
using namespace std;

string rot13(string msg)
{
  for(int i=0; i<msg.length();i++) 
  {
    int cara;
    if(msg[i]>=65&&msg[i]<=90){
      if(msg[i]+13>90){
        cara=msg[i]+13-26;
        msg[i]=cara;
      }else{
        msg[i]+=13;
      }
    }
    if(msg[i]>=97&&msg[i]<=122){
     if(msg[i]+13>122){
        cara=msg[i]+13-26;
        msg[i]=cara;
      }else{
        msg[i]+=13;
      } 
    }
  }
  return msg;
}
