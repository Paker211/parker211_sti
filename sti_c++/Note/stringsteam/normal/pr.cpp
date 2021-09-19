#include<bits/stdc++.h>
using namespace std ;

int main() {
  stringstream s1 ;
  int num = 2345 ;
  string output ;

  cout << "num = " << num << ", type: " << typeid(num).name() << endl ;

  s1 << num ;
  s1 >> output ;

  cout << "output = " << output << ", type: " << typeid(output).name() << endl << endl ;

  //-------------------------------------

  stringstream stringToInt ;
  string s = "3463" ;
  int n1 ;

  stringToInt << s ;
  stringToInt >> n1 ;

  cout << "s = " << s << ", type: " << typeid(s).name() << endl ;
  cout << "n1 = " << n1 << ", type: " << typeid(n1).name() << endl ;

  return 0 ;
}
