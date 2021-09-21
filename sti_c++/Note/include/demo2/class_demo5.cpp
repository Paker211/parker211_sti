#include <iostream>
#include "class_demo4.h"
using namespace std ;

int main() {
  Demo t1 ;
  Demo t2(12) ;
  Demo t3(56, 84) ;

  cout << endl ;
  cout << t1.do_something() << endl ;
  cout << t2.do_something() << endl ;
  cout << t3.do_something() << endl ;
  cout << endl ;

  return 0 ;
}
