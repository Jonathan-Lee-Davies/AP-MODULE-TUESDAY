#include <iostream>

using namespace std;

int main () {
  string input, lowerInput; 

  cout << "Please enter a word: ";
  cin >> input;

  for( int i = 0; i < input.length(); i++) {
    lowerInput += tolower(input[i]);
  }
  
  cout << input << " converted to lowercase is: " << lowerInput;
  return 0;
}
