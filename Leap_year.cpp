#include<iostream>
using namespace std;

int main(){
  int year;
  cout << "Enter a year (To check if it is leap year) :";
  cin >> year;
  if(year%4 == 0){
    cout <<  year <<" is a leap year" << endl;
  }
  else{
    cout << year << " is not a leap year" << endl;
  }
}
