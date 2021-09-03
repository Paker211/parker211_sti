#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, cases, k, val ;
  cin >> n >> cases ;
  vector<vector<int>> a ;
  for(int i=0; i<n ;i++) {
    cin >> k;
    vector<int> tmp ;
    for(int j=0; j<k ;j++) {
      cin >> val ;
      tmp.push_back( val ) ;
    }
    a.push_back( tmp ) ;
  }

  int x, y ;
  while( cases-- ) {
    cin >> x >> y ;
    cout << a[x][y] << endl ;
  }

}
