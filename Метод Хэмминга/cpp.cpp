#include <iostream>
#include <string>

using namespace std;


int* toascii(string str){
  int* result = new int[str.length()];
  for (int i = 0; i < str.length(); i++)
  result[i] = str[i];
  
  return result;
}

int* dec2bin(int* num, string str)
{
  int bin = 0, k = 1;
  int * result = new int[str.length()];
  for (int i=0; i<str.length(); i++){
    while (num[i]){
      bin += (num[i] % 2) * k;
      k *= 10;
      num[i] /= 2;
    }
    result[i]=bin;
    bin = 0;
    k = 1;
  }

  return result;
}

int main() {
  string str = "";
  cout << "Enter your name " << endl;
  cin >> str;
  int* ascii_str = toascii(str);
  cout << "your name in deciman ascii"<< endl;
  for(int i = 0; i < str.length(); i++){
    cout << str[i] << " = " << ascii_str[i] <<endl;
  }

  int* dec = dec2bin(ascii_str, str);
  cout <<endl << "your name in binary ascii "<< endl;
  for(int i = 0; i < str.length(); i++){
  cout << str[i] << " = 0" << dec[i] <<endl;
  }

  
}