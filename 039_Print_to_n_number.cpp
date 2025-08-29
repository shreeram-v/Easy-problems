#include<iostream>
using namespace std;

int main(){
  int num;
  cout << "Enter a number to print to itself :";
  cin >> num;
  
  for(int i=0;i<num;i++){
    cout << i+1 << endl;
  }
}
