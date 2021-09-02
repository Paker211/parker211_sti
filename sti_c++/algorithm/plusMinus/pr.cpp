#include <bits/stdc++.h>
using namespace std;

int main() {
  int num, val ;
  float pos, neg, zero ;

  cin >> num ;
  int tmp = num ;
  while( tmp-- ) {
    cin >> val ;
    if( val > 0 ) {
      pos++ ;
    }
    else if( val < 0 )  {
      neg++ ;
    }
    else {
      zero++ ;
    }
  }

  cout << fixed << setprecision(6) << pos/num << endl ;
  cout << fixed << setprecision(6) << neg/num << endl ;
  cout << fixed << setprecision(6) << zero/num << endl ;

}
