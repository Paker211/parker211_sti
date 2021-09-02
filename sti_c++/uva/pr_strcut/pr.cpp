#include <bits/stdc++.h>
using namespace std;


struct stA {
  int a, b ;
  int fa( int i, int j) {
    return i*j ;
  }
};

int main() {
  stA A ;
  A.a = 5 ;
  A.b = 10 ;
  cout << "A.a = " << A.a << "\n" ;
  cout << "A.b = " << A.b << "\n" ;
  cout << A.fa(A.a, A.b) << endl ;

}
