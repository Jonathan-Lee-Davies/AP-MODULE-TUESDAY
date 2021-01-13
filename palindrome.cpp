#include <iostream> 

using namespace std;

bool isPalindrome(string input) {
  string reverseInput = "";
  string lowerReverse, lowerInput;

  for( int i = input.size() -1 ; i >= 0; i--) {
   reverseInput += input[i];
  }

  for( int i = 0; i < reverseInput.length(); i++) {
    lowerReverse += tolower(reverseInput[i]);
  }

  for( int i = 0; i <input.length(); i ++) {
    lowerInput += tolower(input[i]);
  }

  if(lowerInput == lowerReverse) {
    cout<< "Yes, " << input << " is a palindrome.\n\n";
    return true;
  } else {
    cout<< "Sorry, " << input << " is not a palindrome.\n\n";
    return false;
  }
}


int main () {

  string input;

  while(true) {
  cout<< "Please enter a word: ";
  cin>> input;

  isPalindrome(input);
  }

  return 0;
}
