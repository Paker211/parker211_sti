#include <bits/stdc++.h>
using namespace std;

void reverseStr( string &str ) {
  int n= str.length() ;
  for(int i=0 ;i<n/2 ;i++) {
    swap(str[i], str[n-i-1]);
  }
}

int main() {
  vector<string> s ;
  string tmp ;
  int num ;
  cin >> num ;
  for(int i=1 ;i<num+1 ;i++) {
    tmp="";
    for(int j=1 ;j<num+1 ;j++) {
      if( j<i+1 ) tmp+="#" ;
      else tmp+= " " ;
    }
    reverseStr( tmp ) ;
    s.push_back( tmp ) ;
  }

  for(int i=0 ;i<num ;i++) {
    cout << s[i] << endl ;
  }

}
