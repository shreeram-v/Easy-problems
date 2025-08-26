#include<iostream>
using namespace std;

int main(){
  char x;
  cout << "Enter a Character (To check if it is Vowel or Consonants) :";
  cin >> x;
  if(x == 'a' || x == 'e' || x == 'i' || 
      x == 'o' || x == 'u' || x == 'A' || 
      x == 'E' || x == 'I' || x == 'O' || x == 'U'){
          cout << "Given character is a Vowel" << endl;
      }
  else{
    cout << "Given character is a Consonant" << endl;
  }
}
