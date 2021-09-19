#include<bits/stdc++.h>
using namespace std ;

template<class T>
class myTemplate {
  T element ;
  public :
  myTemplate(T arg) {
    element = arg ;
  }
  T divideBy2() {
    return element/2 ;
  }
};

template<>
class myTemplate<string> {
  string element ;
  public :
  myTemplate(string arg) {
    element = arg ;
  }
  string printElement() {
    return element ;
  }
};

int main() {
  int a = 10 ;
  myTemplate<int> DataInt(a) ;
  cout << "Int testing: " << DataInt.divideBy2() << endl ;

  float x = 56.478 ;
  myTemplate<float> DataFloat(x) ;
  cout << "Float testing: " << DataFloat.divideBy2() << endl ;

  string s = "hello" ;
  myTemplate<string> DataString(s) ;
  cout << "String testing: " << DataString.printElement() << endl ;

  return 0 ;
}
