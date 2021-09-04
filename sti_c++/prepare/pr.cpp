#include <bits/stdc++.h>
using namespace std;

int main(){
  int insertNum ;
  vector<int> v ;
  int erasePosition ;

  cin >> insertNum ;
  int temp ;
  while( insertNum-- ) {
    cin >> temp ;
    v.push_back( temp ) ;
  }

  cin >> erasePosition ;
  v.erase( v.begin()+erasePosition-1 ) ;

  int rangeStart, rangeEnd ;
  cin >> rangeStart >> rangeEnd ;
  for(int i=rangeStart; i<rangeEnd; i++) {
    v.erase( v.begin()+rangeStart-1 ) ;
  }

  cout << v.size() << endl ;
  for(int i=0 ;i<v.size() ;i++) {
    cout << v[i] << " " ;
  }
  cout << endl ;


}

