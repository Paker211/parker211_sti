#include <bits/stdc++.h>
using namespace std;

void timeConversion(string &s) {
  int h1 = s[0] - '0' ;
  int h2 = s[1] - '0' ;
  int hh = h1*10 + h2 ;

  // time in A.M.
  if( s[8] == 'A' ) {
    if( hh == 12 ) {
      s[0] = '0' ; s[1] = '0' ;
    }
  }
  // time in P.M.
  else if( s[8] = 'P' ) {
    if( hh == 12 ) {
      s[0] = '1' ; s[1] = '2' ;
    }
    else {
      hh = hh + 12 ;
      s[0] = (hh/10) + '0' ;
      s[1] = (hh%10) + '0' ;
    }
  }
}

int main() {
  string originTime ;
  cin >> originTime ;

  timeConversion( originTime ) ;
  for(int i=0 ;i<8 ;i++) {
    cout << originTime[i] ;
  }
  cout << endl ;

}
