#include <bits/stdc++.h>
using namespace std;

int main() {
  int left=0, right=0 ;
  int num, res=0 ;

  cin >> num ;
  int matrix[num][num]={0} ;
  for(int i=0 ;i<num ;i++) {
    for(int j=0 ;j<num ;j++) {
      cin >> matrix[i][j] ;
    }
  }
  for(int i=0 ;i<num ;i++) {
    for(int j=0 ;j<num ;j++) {
      if( i==j ) left += matrix[i][j] ;
      if( (i+j)==(num-1) ) right += matrix[i][j] ;
    }
  }

  res = abs( left - right ) ;

  cout << res << endl ;


}
