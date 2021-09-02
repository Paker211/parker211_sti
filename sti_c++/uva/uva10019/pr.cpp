#include <bits/stdc++.h>
using namespace std;

int counter_dec( int a ){
  int counter=0 ;
  while( a!=0 ){
    counter += a%2 ;
    a /= 2 ;
  }
  return counter ;
}

int counter_hex( int a ){
  int counter=0 ;
  while( a!=0 ){
    int tmp = a%10 ;
    while( tmp!=0 ){
      counter += tmp%2 ;
      tmp /= 2;
    }
    a /=10 ;
  }
  return counter;
}

int main(){
  int cases, num, b1, b2;
  cin >> cases ;
  while( cases-- ){
    cin >> num ;
    b1 = counter_dec( num );
    b2 = counter_hex( num );
    cout << "Output: " << b1 << " " << b2 << endl ;
  }
}

