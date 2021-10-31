#include<bits/stdc++.h>
using namespace std;

int main() {
  int totalCase, days, partyCnt, partyDays ;

  cin >> totalCase ;
  while( totalCase-- ) {
    int counter = 0 ;
    cin >> days ;
    bool date[days+1]={ false } ;
    cin >> partyCnt ;
    while( partyCnt-- ) {
      cin >> partyDays ;
      for(int i=1; i<days+1; i++) {
        if( i%partyDays==0 ) date[i] = true ;
      }
    }
    for(int i=1; i<days+1; i++) {
      if( (i%7==6) || (i%7==0) ) date[i] = false ;
    }
    for(int i=1; i<days+1; i++) {
      if( date[i] ) counter++ ;
    }

    cout << counter << endl ;
  }

  return 0 ;
}
