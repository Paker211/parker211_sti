#include<bits/stdc++.h>
using namespace std ;

int main() {

  int var = 33 ;
  int *ip ;
  ip = &var ;
&
  cout << "&var: " << &var << endl ;
  cout << "Address stored in ip variable: " << ip << endl ;
  cout << "Value of var: " << var << endl ;
  cout << "Value of *ip: " << *ip << endl ;



  return 0 ;
}
