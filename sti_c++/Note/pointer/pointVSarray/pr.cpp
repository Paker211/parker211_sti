#include<bits/stdc++.h>
using namespace std ;

const int Max = 3 ;

int main() {
  int var[Max] = { 10, 100, 200 };
  int *ptr ;

  ptr = var ;
  for(int i=0; i<Max; i++ ) {
    cout << "var[" << i <<  "] Address: " << ptr << endl ;
    cout << "var[" << i <<  "] Value: " << *ptr << endl ;

    ptr++ ;
  }

  return 0 ;
}

