#include<iostream>
using namespace std;

int main(){
  int x;
  cout << "Enter a number (check if it is positive, negative or zero): ";
  cin >> x;
  if(x>0){
    cout << "Positive";
  }
  else if(x==0){
    cout << "Zero";
  }
  else {
    cout << "Negative";
  }
  cout << "\n"; 
}
