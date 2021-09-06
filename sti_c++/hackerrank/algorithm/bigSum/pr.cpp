#include <bits/stdc++.h>
using namespace std;

void reverseStr( string &str ) {
  int n= str.length() ;
  for(int i=0 ;i<n/2 ;i++) {
    swap(str[i], str[n-i-1]);
  }
}

int max(int a, int b){
  if( a>b ) return a ;
  else return b ;
}

string bigAdd(string s1, string s2) {
  string res="" ;
  bool carry=false ;
  vector<char> tmp ;
  int maxStrLen = max(s1.length(), s2.length()) ;
  reverseStr( s1 ) ;
  reverseStr( s2 ) ;
  if( s1.length() < maxStrLen ){
    int dis = maxStrLen - s1.length() ;
    while( dis-- ) s1 += '0' ;
  }
  if( s2.length() < maxStrLen ){
    int dis = maxStrLen - s2.length() ;
    while( dis-- ) s2 += '0' ;
  }

  for(int i=0 ;i<maxStrLen ;i++) {
    int sum = (s1[i]-'0') + (s2[i]-'0') ;
    if( carry ) {
      sum++ ;
      carry=false ;
    }
    if( sum > 9 ) {
      tmp.push_back((sum%10) + '0') ;
      carry=true;
    }
    else{
      tmp.push_back( sum+'0' ) ;
    }
    if(( i==maxStrLen-1 )&&( carry )) {
      tmp.push_back( '1' ) ;
    }
  }

  for(int i=0 ;i<tmp.size() ;i++) {
    res += tmp[i];
  }

  reverseStr( res ) ;

  return res ;
}


int main() {
  string sum, val ;
  vector<string> vec ;
  int num ;
  cin >> num ;
  while( num-- ) {
    cin >> val ;
    vec.push_back( val ) ;
  }

  for(int i=1 ;i<vec.size() ;i++) {
    vec[i] = bigAdd( vec[i], vec[i-1] ) ;
  }
  sum = vec[vec.size()-1];

  cout << sum << endl ;

}
