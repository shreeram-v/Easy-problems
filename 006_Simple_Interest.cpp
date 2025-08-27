#include<iostream>
using namespace std;

int main(){
  int p,t,r;
  float Si;
  cout << "Enter value for Principal :";
  cin >> p;
  cout << "Enter value for Time :";
  cin >> t;
  cout << "Enter value for Rate :";
  cin >> r;
  Si = (p*t*r)/100;
  cout << "Simple Interest : " << Si;
  cout << "\n";
}
