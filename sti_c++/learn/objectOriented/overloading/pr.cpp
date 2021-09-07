#include <bits/stdc++.h>
using namespace std;

class printData {
  public :
    void print( int i ) {
      cout << "Printing int: " << i << endl ;
    }
    void print( double f ) {
      cout << "Printing float: " << f << endl ;
    }
    void print( string s ) {
      cout << "Printing string: " << s << endl ;
    }
};

int main() {
  printData pd ;

  pd.print( 5 ) ;

  pd.print( 500.234 ) ;

  pd.print( "hello world" ) ;

  return 0 ;
}
