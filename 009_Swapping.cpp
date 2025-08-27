#include<iostream>
using namespace std;

int main(){
  int x,y,temp;
  cout << "Enter value for x :";
  cin >> x;
  cout << "Enter value for y :";
  cin >> y;
  temp = x;
  x = y;
  y = temp;
  cout << "Elements after swapping :" << x << " " << y;
}
