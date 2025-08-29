#include<iostream>
using namespace std;

int main(){
  int a1,a2,a3;
  cout << "Enter first angle :";
  cin >> a1;
  cout << "Enter second angle :";
  cin >> a2;
  cout << "Enter third angle :";
  cin >> a3;
  
  if(a1>0 && a2>0 && a3>0 && a1+a2+a3<=180){
    cout << "Triangle is Valid!!" << endl;
  }
  else{
    cout << "Triangle is invalid!!" << endl;
  }
}
