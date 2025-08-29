#include<iostream>
using namespace std;

int main(){
  int num,fac=1;
  cout << "Enter a number to find its factorial :";
  cin >> num;
  for(int i=num;i>0;i--){
    fac = fac*i;
  }
  cout << "Factorial of " << num << " is :" << fac << endl;
}
