#include<bits/stdc++.h>
using namespace std;

string reverse(string s) {
  for(int i=0; i<s.length()/2 ;i++) {
    swap(s[i],s[s.length()-i]) ;
  }
  return s;
}

string intToString(int a) {
  string res = "" ;
  while(a>0) {
    res += (a%10) + '0' ;
    a /= 10 ;
  }
  reverse(res) ;
  return res ;
}

int main(){
  //string line;
  //while( cin>>line ) {
  //  if( line == '0' ) break ;
  //}
  int x = 12345 ;
  cout << intToString( x ) << endl ;
  cout << reverse("3456") << endl ;

}
