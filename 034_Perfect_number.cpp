#include<iostream>
using namespace std;
int main(){
  int num,sum = 0;
  
  cout << "Enter a number (To check if it's a perfect number) : ";
  cin >> num;
  
  if(num>0){
    for(int i=1;i<=num/2;i++){
      if(num%i == 0){
        sum += i;
      }
    }
    if(sum == num){
      cout << num << " is a perfect number" << endl;
    }
    else{
      cout << num << " is not a perfect number" << endl;
    }
  } 
  else{
    cout << "Enter a valid number" << endl;
  }
}
