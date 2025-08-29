#include<iostream>
using namespace std;

int main(){
  int num;
  cout << "Enter a number to print itself to 1 :";
  cin >> num;
  
  for(int i=num;i>0;i--){
    cout << i << endl;
  }
}
