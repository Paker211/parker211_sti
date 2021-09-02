#include <bits/stdc++.h>
using namespace std;

const int maxNum=5000 ;
string f[maxNum] ;

string mySum( string s1, string s2 ) {
  string s="" ;
  int n1=s1.size(), n2=s2.size() ;
  int carry=0 ;
  for(int i=0 ; i<n2 ; i++ ) {
    int tmp = carry + ( s1[i] - '0' ) + ( s2[i] - '0') ;
    s += '0' + (tmp%10) ;
    carry = tmp / 10 ;
  }
  if( n1 == n2 ) {
    if( carry ) s += '0' + carry ;
  }
  else {
    s += '0' + ( carry + s1[n1-1] - '0') ;
  }
  return s ;
}

int main() {
  f[0]="0" ; f[1]="1" ;
  for(int i=2 ; i<maxNum ; i++ ) {
    f[i] = mySum( f[i-1], f[i-2] ) ;
  }

  int n ;
  while( cin>>n ) {
    string s=f[n] ;
    reverse( s.begin(), s.end() ) ;
    cout << "The Fibonacci number for " << n << " is " ;
    cout << s << endl ;
  }
  return 0 ;
}
