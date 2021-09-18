#include<bits/stdc++.h>
using namespace std ;

template<class T>
void swaps(T& a1, T& a2) {
  T tmp=a1 ;
  a1 = a2 ;
  a2 = tmp ;
}


int main() {
  int a = 22 ;
  int b = 43 ;
  cout << "( " << a << ", " << b << " )" << endl ;
  swaps(a,b) ;
  cout << "( " << a << ", " << b << " )" << endl ;

  return 0 ;
}
