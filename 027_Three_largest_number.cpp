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
  
  if(a>b && a>c){
    cout << a << " is the largest" << endl;
  }
  else if(b>c){
    cout << b << " is the largest" << endl;
  }
  else{
    cout << c << " is the largest" << endl;
  }
  
}
