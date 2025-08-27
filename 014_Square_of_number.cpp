#include<iostream>
using namespace std;

int main(){
  int num,p;
  cout << "Enter the number :";
  cin >> num;
  cout << "Enter the power of the number :";
  cin >> p;
  for(int i=0;i<p;i++){
    num = num*num;
  }
  cout = "\n";
}
