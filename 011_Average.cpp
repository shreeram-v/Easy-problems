#include<iostream>
using namespace std;

int main(){
  int a,b,c;
  cout << "Enter value for a :";
  cin >> a;
  cout << "Enter value for b :";
  cin >> b;
  cout << "Enter value for c :";
  cin >> c;
  int avg;
  avg = (a+b+c)/3;
  cout << "Average of "<< a <<","<< b << ","<< c << " is "<< avg; 
  cout << "\n";
}
