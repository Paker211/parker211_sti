#include <bits/stdc++.h>
using namespace std;

int main() {
  int AliceScore=0, BobScore=0 ;
  int a[3], b[3] ;
  for(int i=0 ; i<3 ; i++) cin >> a[i] ;
  for(int i=0 ; i<3 ; i++) cin >> b[i] ;

  for(int i=0 ; i<3 ; i++) {
    if( a[i] > b[i] ) {
      AliceScore++ ;
    }
    else if( a[i] < b[i] ) {
      BobScore++ ;
    }
    else continue ;
  }
  cout << AliceScore << " " << BobScore << endl ;

}
