#include<iostream>
using namespace std;

int main(){
  int x=1,n;
  cout << "Enter the range to get the product :";
  cin >> n;
  
  for(int i=1;i<n;i++){
    x=x*i;
  }
  cout << x;
  cout << "\n";
}
