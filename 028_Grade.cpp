#include<iostream>
using namespace std;

int main(){
  int mark;
  cout << "Enter a mark :";
  cin >> mark;
  if(mark>=80){
    cout << "Grade = A" << endl;
  }
  else if(mark>=70){
    cout << "Grade = B" << endl;
  }
  else if(mark>=60){
    cout << "Grade = C" << endl;
  }
  else{
    cout << "Grade = F" << endl;
  }
}
