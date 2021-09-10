#include<bits/stdc++.h>
#include<iomanip>
using namespace std ;

void myOut(int n, string s1, string s2, string s3, string s4, string s5, string s6) {
  cout.setf(ios_base::left, ios_base::adjustfield);
  cout.width(n) ; cout << s1 ;
  cout.width(n) ; cout << s2 ;
  cout.width(n) ; cout << s3 ;
  cout.width(n) ; cout << s4 ;
  cout.width(n) ; cout << s5 ;
  cout.width(n) ; cout << s6 ;
  cout << endl ;
  cout.setf(ios_base::right, ios_base::adjustfield) ;
}


int main() {
  myOut(8, "name", "age", "level", "hp", "mp", "score") ;
  myOut(8, "weiwei", "18","1", "50", "20", "95") ;
  myOut(8, "nana", "20","1", "60", "12", "92") ;

  cout << endl ;
  return 0 ;
}
