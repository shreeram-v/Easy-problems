#include<iostream>
using namespace std;

int main(){
  int x;
  cout << "Enter a number (To check if divisible by 5 and 11) :";
  cin >> x;
  if(x%5 == 0 && x%11 == 0){
    cout << x << " is divisible by 5 and 11" << endl;
  }
  else{
    cout << x << " is not divisible by 5 and 11" << endl;
  }
}
