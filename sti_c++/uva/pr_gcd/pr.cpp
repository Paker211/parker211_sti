#include<bits/stdc++.h>
using namespace std ;

int gcd(int a, int b) {
  int temp ;
  while( b!=0 ) {
    temp = b ;
    b = a % b ;
    a = temp ;
  }
  return a ;
}


int main() {
  int a, b ;
  while( cin >> a >> b ) {
    while( b!=0 ) {
      int tmp ;
      tmp = b ;
      b = a%b ;
      a = tmp ;
    }
    cout << a << endl ;
  }

  return 0 ;
}
