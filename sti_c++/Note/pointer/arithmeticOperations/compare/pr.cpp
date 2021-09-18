#include<bits/stdc++.h>
using namespace std ;

const int Max=3 ;

int main() {
  int var[Max]={ 10, 100, 200 };
  int *ptr ;

  ptr = var ;
  int i = 0 ;
  while( ptr <= &var[Max-1] ) {
    cout << "Address of var[" << i << "] = " << ptr << endl ;
    cout << "Value of var[" << i << "] = " << *ptr << endl ;

    ptr++ ;
    i++ ;
  }

  return 0 ;
}
