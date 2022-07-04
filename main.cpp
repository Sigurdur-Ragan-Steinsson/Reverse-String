#include <iostream>
#include <string>

using namespace std;


string reverse(string stg){

//break sentence into words store vector
//count down for loop to print


  int spaceCount = 1;
  string inter_words;
  for(int i = 0; i < stg.length(); i++ ){
    if(stg[i] == ' ')
      spaceCount++;
  }
  
  string words[spaceCount];
  // // maybe for i w/ stg.length() > 0 as condition
  for(int i=0; i < spaceCount; i++){
    inter_words= stg.substr(0, stg.find(' '));
    words[i] = inter_words;
    stg.erase(0,stg.find(' ')+1);
  }
  // // maybe this should be words length, stg should be 0
  // // This needs to count down rather than start at end and count up
  for(int i = spaceCount-1; i >=0; i--){
    cout << words[i] << ' ';
  }
  return "hi";
};

int main() {
  // the cat is black
  // black is cat the
  string sentence;
  getline(cin, sentence);
  reverse(sentence);
}