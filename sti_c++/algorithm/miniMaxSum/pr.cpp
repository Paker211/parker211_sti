#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> vec;
  unsigned long val ;
  unsigned long min=0, max=0 ;
  while( cin >> val ) {
    vec.push_back( val ) ;
  }
  sort(vec.begin(), vec.end()) ;
  for(int i=0; i<vec.size()-1; i++ ) min += vec[i];
  for(int i=1; i<vec.size(); i++ ) max += vec[i];
  cout << min << " " << max << endl ;

}
