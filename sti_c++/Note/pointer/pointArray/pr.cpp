#include<bits/stdc++.h>
using namespace std ;

const int Max = 3 ;

int main() {
  int var[Max] = { 10 ,100, 200 } ;
  int *ptr[Max] ;

  for(int i=0; i<Max; i++) {
    ptr[i] = &var[i] ;
  }
  for(int i=0; i<Max; i++) {
    cout << "Value of var[" << i << "] =  " << *ptr[i] << endl ;
  }


  return 0 ;
}

