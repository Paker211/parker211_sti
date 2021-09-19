#include<bits/stdc++.h>
using namespace std ;

int main() {
  stringstream s1 ;
  int N ;
  int i1 ;

  cin >> N ;
  cin.ignore() ;
  string line ;
  for(int i=0; i<N; i++) {
    getline(cin, line) ;
    int sum=0 ;
    s1.clear() ;
    s1 << line ;
    while( true ) {
      s1 >> i1 ;
      if(s1.fail()) break ;
      sum += i1 ;
    }
    cout << sum << endl ;
  }
}
