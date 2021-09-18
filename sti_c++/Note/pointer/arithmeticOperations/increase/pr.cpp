#include<bits/stdc++.h>
using namespace std ;

const int Max = 3 ;

int main() {
  int var[Max] = { 10, 100, 200 };
  int *ptr ;

  //ptr = &var[0] ;
  ptr = var ;
  for(int i=0 ;i<Max ;i++ ) {
    cout << "Address of var[" << i << "] = " << ptr << endl ;
    cout << "Value of var[" << i << "] = " << *ptr << endl ;

    ptr++ ;
  }

  return 0 ;
}
