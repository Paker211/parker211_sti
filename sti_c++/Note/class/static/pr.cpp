#include<bits/stdc++.h>
using namespace std;

class classA {
  public :
    int a ;
    classA() {
      a = 5 ;
      objNumber++ ;
    }
    static void printObjNumber() {
      cout << objNumber << endl ;
    }
  private :
    static int objNumber ;
};

int classA::objNumber = 0 ;

int main() {
  classA A1 ;
  A1.printObjNumber() ;

  classA A2 ;
  A1.printObjNumber() ;
  A2.printObjNumber() ;

  classA A3 ;
  A1.printObjNumber() ;
  A2.printObjNumber() ;
  A3.printObjNumber() ;
}
