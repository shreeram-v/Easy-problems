#include<iostream>
using namespace std;

int main(){
  int num,temp,p;
  cout << "Enter the number :";
  cin >> num;
  temp = num;
  cout << "Enter the power of the number :";
  cin >> p;
  for(int i=1;i<p;i++){
    num = num*num;
  }
  cout << "Power of "<< temp << " with " << p << " is " << num;
  cout << "\n";
}
