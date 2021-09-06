#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> vec;
  int num, val;
  int sum=0 ;
  cin >> num ;
  while( num-- ) {
    cin >> val ;
    vec.push_back( val ) ;
  }

  for(int i=0 ; i<vec.size() ; i++) {
    sum += vec[i] ;
  }
  cout << sum ;
}
