#include<bits/stdc++.h>
using namespace std ;

template<class T>
void swaps(T& a1, T& a2) {
  T tmp=a1 ;
  a1 = a2 ;
  a2 = tmp ;
}

template<>
void swaps<int>(int& a1, int& a2) {

}

int main() {
  int a=10 ;
  int b=20 ;
  cout << a << " " << b << endl ;
  swaps(a, b) ;
  cout << a << " " << b << endl ;
  cout << "\n" ;

  string s1="hello" ;
  string s2="world" ;
  cout << s1 << " " << s2 << endl ;
  swaps(s1, s2) ;
  cout << s1 << " " << s2 << endl ;
  cout << "\n" ;


  return 0 ;
}
