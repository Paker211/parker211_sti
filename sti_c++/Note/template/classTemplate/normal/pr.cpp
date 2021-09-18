#include<bits/stdc++.h>
using namespace std ;

template<class T>
class Printer {
  public :
    T t ;
    Printer(T _t){
      t =  _t ;
    }
    void print() {
      cout << t << endl ;
    }
};

int main() {
  Printer<string> p("hello") ;
  p.print() ;

  return 0 ;
}
