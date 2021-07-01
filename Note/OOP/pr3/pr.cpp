#include <bits/stdc++.h>
using namespace std;

class myClass{
  public:
    void myMethod();
};

void myClass::myMethod(){
  cout << "hello world!!" << endl ;
}

int main(){

  myClass myObj ;

  //Print
  myObj.myMethod() ;

  return 0 ;
}
