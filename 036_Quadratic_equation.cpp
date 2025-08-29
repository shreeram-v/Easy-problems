#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int a,b,c,x;
  cout << "Enter value for a :";
  cin >> a;
  cout << "Enter value for b :";
  cin >> b;
  cout << "Enter value for c :";
  cin >> c;

  x = b*b - 4*a*c;
  
  if(x>=0){
    cout << "Root 1" << -b + sqrt(x) / (2/a) << endl;
    cout << "Root 2" << -b - sqrt(x) / (2/a) << endl;
  }
  else{
    cout << "Complex Roots!!";
  }
  
}
