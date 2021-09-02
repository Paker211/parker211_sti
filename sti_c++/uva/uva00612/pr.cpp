#include <bits/stdc++.h>
using namespace std;

// Individual data
struct Data {
  string s ;
  int id, unsortedness ;
};

//calculate unsortedness value
int calUnsortedness( string s ) {
  int ret = 0 ;
  for( int i=0 ; i<s.size() ; i++ ){
    int cnt = 0 ;
    for( int j=i+1 ; j<s.size() ; j++ ){
      if( s[j] < s[i] ) cnt++ ;
    }
    ret += cnt ;
  }
  return ret ;
}

bool cmp( Data a, Data b ) {
  // '>' --> sort lorage to small
  // '<' --> sort small to large
  if( a.unsortedness != b.unsortedness ) return  a.unsortedness < b.unsortedness ;
  else return a.id < b.id ;
}

//Main
int main(){
  //   sortedness have small value
  // unsortedness have large value
  // output from sortedness to unsortedness
  // outpur from small to large
  int T, n, m ;
  cin >> T ;
  while( T-- ){
    cin >> n >> m ;
    Data data[m] ;
    for( int i=0 ; i<m ; i++){
      cin >> data[i].s ;
      data[i].id = i ;
      data[i].unsortedness = calUnsortedness( data[i].s ) ;
    }
    sort( data, data+m, cmp) ;
    cout << endl ;
    for( auto i: data ) {
      cout << i.s << "\n" ;
    }
  }
  return 0 ;
}


