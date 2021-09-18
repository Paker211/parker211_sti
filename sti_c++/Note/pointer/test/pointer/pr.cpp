#include<bits/stdc++.h>
using namespace std ;

void swaps(int *a1, int *a2) {
  int tmp = *a1 ;
  *a1 = *a2 ;
  *a2 = tmp ;

  return ;
}

int main() {
  int x=20, y=30 ;
  cout << "x: " << x << ", y: " << y << endl ;
  swaps(&x, &y) ;
  cout << "x: " << x << ", y: " << y << endl ;

  return 0 ;
}
