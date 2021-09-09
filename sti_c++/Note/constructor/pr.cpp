#include<bits/stdc++.h>
using namespace std ;

class classA {
  public :
    classA(int a_, int b_, int c_){
      a = a_ ;
      b = b_ ;
      c = c_ ;
    }
    classA() {
      a = 3 ; b = 6 ; c = 9 ;
    }
    void printValue() {
      cout << "a: " << a << ", b: " << b << ", c: " << c << endl ;
    }
  private :
    int a, b, c ;
};

int main() {
  classA *A1 = new classA(12, 15, 41) ;
  classA *A2 = new classA ;
  A1->printValue() ;
  A2->printValue() ;

}
