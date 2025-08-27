#include<iostream>
using namespace std;

int main(){
  int num,temp,revNum=0,digit;
  cout << "Enter a combination of numbers : ";
  cin >> num;
  
  temp = num;
  
  while(num > 0){
    digit = num % 10;
    revNum = revNum * 10 + digit;
    num = num/10;
  }
  if(temp==revNum){
    cout << temp << " is a palindrome" << endl;
  }
  else{
    cout << temp << " is not a palindrome" << endl;
  }
}
