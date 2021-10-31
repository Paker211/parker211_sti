#include<bits/stdc++.h>
using namespace std ;

int main() {
  int T,Cnt=1 ;
  cin >> T ;
  while( T-- ) {
    int a, b, sum=0 ;
    cin >> a >> b; ;
    for(int i=a; i<b+1 ;i++) {
      if( i%2 ) {
        sum += i ;
      }
    }
    cout << "Case " << Cnt << ": " << sum << endl ;
    Cnt++ ;
  }

  return 0 ;
}

