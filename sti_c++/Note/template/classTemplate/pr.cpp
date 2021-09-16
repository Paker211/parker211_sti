#include<bits/stdc++.h>
using namespace std ;

template<class T>
//Printer.h
class Printer {
  public :
    T _t ;
    Printer(T t) {
      _t = t ;
    }
    void print() {
      cout << _t << endl ;
    }
};

int main() {
  Printer<int> p(100) ;
  p.print() ;

  return 0 ;
}
