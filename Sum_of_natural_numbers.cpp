#include<iostream>
using namespace std;

int main(){
  int x=0,n;
  cout << "Enter the range to get the sum :";
  cin >> n;
  
  for(int i=0;i<n;i++){
    x=x+i;
  }
  cout << x;
  cout << "\n";
}
