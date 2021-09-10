#include<bits/stdc++.h>
using namespace std;

class classA {
  public :
    classA(int a_, int b_, int c_) {
      a = a_ ; b = b_ ; c = c_ ;
    }
    classA() {
      a = 5 ; b = 10 ; c = 15 ;
    }
    void printValue() {
      cout << a <<", " << b << ", " << c << " ." << endl ;
    }
  private :
    int a, b, c ;
};

int main() {
  classA m[4]={
    classA(),
    classA(11,12,13),
    classA(21,22,23),
    classA(31,32,33)
  };

  for(int i=0; i<4 ;i++){
    m[i].printValue() ;
  }

}
