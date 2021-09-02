#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, C ;
  while( cin >> N >> C ) {
    vector<int> prime ;
    prime.push_back( 1 ) ;
    prime.push_back( 2 ) ;
    //-- find 1~N prime
    for(int i=2 ; i<=N ; i++ ) {
      for(int j=2 ; j<=i ; j++ ) {
        if( i%j == 0 ) break ;
        else if( i == j+1 ) {
          prime.push_back( i ) ;
        }
      }
    }
    // ------

    int K=prime.size() ;
    if( (N==1) && (C==1) ) {
      cout << "1 1: 1 " ;
      cout << endl ;
    }
    else if( (C*2) > K ) {
      cout << N << " " << C << ":" ;
      for(int i=0 ; i<K; i++ ) {
        cout << " " << prime[i] ;
      }
      cout << endl ;
    }
    else if( K%2 == 0 ) {
      cout << N << " " << C << ":" ;
      for(int i=K/2-C, j=0 ; j<C*2 ; i++,j++ ) {
        cout << " " << prime[i] ;
      }
      cout << endl ;
    }
    else {
      cout << N << " " << C << ":" ;
      for(int i=K/2-C/2, j=0 ; j<C*2-1 ; i++, j++) {
        cout << " " << prime[i] ;
      }
      cout << endl ;
    }
      cout << N << " " << C << ":" ;
    cout << endl ;
  }
}
