#include<bits/stdc++.h>
using namespace std ;

void EqualToY(int *a, int *b) ;

int main() {
  int x=34, y=89 ;

  cout << "Before EqualToY() , x: " << x << " Address: " << &x << endl ;
  cout << "Before EqualToY() , y: " << y << " Address: " << &y << endl << endl ;

  EqualToY(&x, &y) ;

  cout << "After EqualToY() , x: " << x << " Address: " << &x << endl ;
  cout << "After EqualToY() , y: " << y << " Address: " << &y << endl << endl ;

  return 0 ;
}



void EqualToY(int *a, int *b) {
  cout << "Before a=b , a: " << *a << " Address: " << a << endl ;
  cout << "Before a=b , b: " << *b << " Address: " << b << endl << endl ;

  *a = *b ;

  cout << "After a=b , a: " << *a << " Address: " << a << endl ;
  cout << "After a=b , b: " << *b << " Address: " << b << endl << endl ;
}
