#include<iostream>
using namespace std;

int main(){
  int units;
  cout << "Enter the units consumed  :";
  cin >> units;
  int total;
  if(units <= 300){
    total = units * 6.40;
    cout << "Total Electricity Bill, Rs." << total << endl;
  }
  else if(units <= 350){
    total = (300 * 6.40) + (units - 300)* 7.25;
    cout << "Total Electricity Bill, Rs." << total << endl;
  }
  else if(units <= 400){
    total = (300 * 6.40) + (50 * 7.25) + (units - 350)* 7.60;
    cout << "Total Electricity Bill, Rs." << total << endl;
  }
  else if(units <=500){
    total = (300 * 6.40) + (50 * 7.25) + (50 * 7.60) + (units - 400)* 7.90;
    cout << "Total Electricity Bill, Rs." << total << endl;
  }
  else{
    total = (300 * 6.40) + (50 * 7.25) + (50 * 7.60) + (50 * 7.90) + (units - 500)* 8.80; 
    cout << "Total Electricity Bill, Rs." << total << endl;
  }
}
