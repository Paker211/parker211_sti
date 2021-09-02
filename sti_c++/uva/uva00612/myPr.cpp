#include <bits/stdc++.h>
using namespace std;

class Data {
  public:
    string s ;
    int sequence, unsortedness ;
};

int calUnsortedness( string s ) {
  int ret, cnt ;
  ret = 0 ;
  for(int i=0 ; i<s.size() ; i++ ) {
    cnt = 0 ;
    for( int j=i+1 ; j<s.size() ; j++ ){
      if( s[i] > s[j] ) cnt++ ;
    }
    ret += cnt ;
  }
  return ret ;
}

bool cmp( Data a, Data b ) {
  if( a.unsortedness != b.unsortedness ) return a.unsortedness < b.unsortedness ;
  else return a.sequence < b.sequence ;
}

int main() {
  int T, n, m ;
  cin >> T ;
  while( T-- ) {
    cin >> n >> m ;
    Data data[m] ;
    for(int i=0 ; i<m ; i++) {
      cin >> data[i].s ;
      data[i].sequence = i ;
      data[i].unsortedness = calUnsortedness( data[i].s );
    }
    sort( data, data+m, cmp) ;
    cout << endl ;
    for( auto i: data) {
      cout << i.s << "\n" ;
    }
  }
  return 0 ;
}
