#include<bits/stdc++.h>
using namespace std ;

int main() {
  int cnt[256]={0} ;
  int line, max=0 ;
  string s ;
  cin >> line ;
  getline( cin, s ) ;
  while( line-- ) {
    getline(cin, s) ;
    for(int i=0; i<s.length(); i++) {
      cnt[toupper(s[i])]++ ;
      if( cnt[toupper(s[i])] > max ) max=cnt[toupper(s[i])] ;
    }
  }
  for(int i=max; i>0; i--) {
    for(char c='A'; c<='Z'; c++) {
      if( cnt[c]==i ) cout << c << " " << i << endl ;
    }
  }

  return 0 ;
}
