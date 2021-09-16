#include<bits/stdc++.h>
#include<fstream>
using namespace std ;


int main() {
  string test ;
  ifstream c2("tt.txt") ;
  for(int i=0; i<6; i++) {
    getline(c2, test) ;
    if( i%2==0 ) {
      ofstream c1("aa.txt", ios_base::out | ios_base::app) ;
      c1 << test<< endl;
      c1.close() ;
    }
    else {
      ofstream c1("bb.txt", ios_base::out | ios_base::app) ;
      c1 << test<< endl;
      c1.close() ;
    }
  }
  c2.close() ;
}

