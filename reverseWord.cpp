#include <iostream>

using namespace std;

int main () {

  string word;
  string reverseWord;

  cout<<"Please enter a word: ";
  cin>>word;

  for(int i = word.size() -1 ; i >= 0 ; i--) {
    reverseWord = reverseWord + word[i];
  }

  cout<<reverseWord;

  return 0;
}
