#include<iostream>
using namespace std;

int main(){
  float celsius, fahrenheit;
  cout << "Enter value for Celsius :";
  cin >> celsius;
  fahrenheit = (celsius * 9/5) + 32;
  cout << "Fahrenheit = " << fahrenheit;
  cout << "\n";
}
