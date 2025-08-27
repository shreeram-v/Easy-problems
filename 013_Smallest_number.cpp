#include<iostream>
using namespace std;

int main(){
  int x,y;
  cout << "Enter value for x :";
  cin >> x;
  cout << "Enter value for y :";
  cin >> y;
  if(x<y){
    cout << "Smallest number is :" << x;
  }
  else{
    cout << "Smallest number is :" << y;
  }
  cout << "\n";
}

