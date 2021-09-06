#include <bits/stdc++.h>
using namespace std;

int main() {
  int num ;
  int originGrade, finalGrade ;
  cin >> num ;
  while( num-- ) {
    cin >> originGrade ;
    if( originGrade < 38 ) {
      finalGrade = originGrade ;
    }
    else {
      if( (originGrade%5) < 3 ) finalGrade = originGrade ;
      else if( (originGrade%5) == 3 ) finalGrade = originGrade + 2 ;
      else if( (originGrade%5) == 4 ) finalGrade = originGrade + 1 ;
    }

    cout << finalGrade << endl ;
  }
}
