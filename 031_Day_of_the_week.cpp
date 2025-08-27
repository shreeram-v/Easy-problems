#include<iostream>
#include<cctype>
using namespace std;

int main(){
  int a;
  cout << "Enter a number (1 to 7) to get the day of week :";
  cin >> a;
  if(a==1){
    cout << "Sunday"<< endl;
  }
  else if(a==2){
    cout << "Monday"<< endl;
  }
  else if(a==3){
    cout << "Tuesday"<< endl;
  }
  else if(a==4){
    cout << "Wednesday"<< endl;
  }
  else if(a==5){
    cout << "Thursday"<< endl;
  }
  else if(a==6){
    cout << "Friday"<< endl;
  }
  else if(a==7){
    cout << "Saturday"<< endl;
  }
  else{
    cout << "Invalid number entered!!" << endl; 
  }
}
