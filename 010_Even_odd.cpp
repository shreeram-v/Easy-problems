#include<iostream>
using namespace std;

int main(){
  int num;
  cout << "Enter a number (To check if it is even or odd) :";
  cin >> num;
  if(num%2==0){
    cout << "Number is Even";
  }
  else{
    cout << "Number is Odd";
  }
  cout << "\n";
}
