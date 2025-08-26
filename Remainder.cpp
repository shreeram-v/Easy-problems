#include<iostream>
using namespace std;

int main(){
  int x,y;
  float rem;
  cout << "Enter value for x :";
  cin >> x;
  cout << "Enter value for y :";
  cin >> y;
  rem = x%y;
  cout << "Remainder of "<< x <<" and "<< y <<" is :" << rem;
  cout << "\n"; 
}
