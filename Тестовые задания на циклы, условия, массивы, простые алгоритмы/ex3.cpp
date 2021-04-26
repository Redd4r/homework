#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
  int n, g, f;
  float t, a, b;
  string str, sstr;
  cout << "Введите число от 0 до 200: ";
  cin >> n;
  b = 3;


for (int i = 0; i < 5; i++){ // Перевод в троичную систему счисления
  g = n / b;
  t = g * b;
  f = n - t;
  if (n > 1){
    n = n / b;
    str = to_string(int(f)) + str;
  }
  else{
  str = to_string(int(f)) + str;
  break;
  }
}

  for(int i = 0; i < str.length(); i++){ // Удвоение символов
    sstr += str[i];
    sstr += str[i];
  }

  int result;
  int len = sstr.length() - 1;// Перевод удвоенного числа в десятичную систему счисления
  for (int i = 0; i < sstr.length(); i++){ 
    result += (int(sstr[i]) - 48) * pow(3, len);
    len--;
  }
  cout << "Результат = " << result;
}