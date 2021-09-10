#include<bits/stdc++.h>
using namespace std;

class classA {
  public :
    mutable int a ;
    void setA() const {
      a = 10 ;
    }
    int getA() {
      return a ;
    }
    classA() {
      a =100 ;
    }
};


int main() {
  const classA A ;
  A.a = 5 ;

}
