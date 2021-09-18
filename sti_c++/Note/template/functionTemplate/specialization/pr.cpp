#include<bits/stdc++.h>
using namespace std ;

template<class T>
void swaps(T& a1, T& a2){
  T tmp = a1 ;
  a1 = a2 ;
  a2 = tmp ;
}

template<>
void swaps<int>(int& a1, int& a2) {

}

int main() {
  int a = 25 ;
  int b = 68 ;
  cout << "Specialization(int): " << endl ;
  cout << "( " << a << ", " << b << " )" << endl ;
  swaps(a, b) ;
  cout << "( " << a << ", " << b << " )" << endl ;
  cout << endl ;

  string x = "hello"  ;
  string y = "world"  ;
  cout << "( " << x << ", " << y << " )" << endl ;
  swaps(x, y) ;
  cout << "( " << x << ", " << y << " )" << endl ;


  return 0 ;
}
