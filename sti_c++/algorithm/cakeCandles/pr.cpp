#include <bits/stdc++.h>
using namespace std;

int main() {
  int num, val, max=0 ;
  map<int, int> unitCounter ;

  cin >> num ;
  for(int i=0; i<num ;i++) {
    cin >> val ;
    unitCounter[val]++ ;
    if(unitCounter[val] > max) max=unitCounter[val] ;
  }

  cout << max << endl ;

}
