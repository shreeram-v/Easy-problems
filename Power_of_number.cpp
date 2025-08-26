#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int num,p;
  cout << "Enter a number (To find the power of the number) :";
  cin >> num;
  cout << "Enter the power :";
  cin >> p;
  cout << "Power of "<<num << " is " << pow(num,p);
  cout << "\n";
}
