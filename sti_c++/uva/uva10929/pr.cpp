#include<bits/stdc++.h>
using namespace std ;

int calDiff(string s) {
  int odd=0, even=0, diff=0 ;
  for(int i=0; i<s.length(); i++) {
    if(i%2) { //odd
      odd += s[i]-'0' ;
    }
    else { //even
      even += s[i]-'0' ;
    }
  }
  diff = abs( odd-even ) ;
  return diff ;
}

int main() {
  string testCase ;
  while( (cin>>testCase) && (testCase!="0") ) {
    int diffCase=0 ;
    diffCase = calDiff( testCase ) ;
    if( diffCase%11==0 ) {
      cout << testCase << " is a multiple of 11." ;
    }
    else {
      cout << testCase << " is not a multiple of 11." ;
    }
    cout << endl ;
  }

  return 0 ;
}
