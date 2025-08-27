#include<iostream>
#include<cctype>
using namespace std;

int main(){
    char ch;
    cout << "Enter a character :";
    cin >> ch;
    if(isdigit(ch)){
      cout << ch << " is an integer." << endl;
    }
    else{
      cout << ch << " is not an integer." << endl; 
    }
    cout << "\n";
}
