#include <bits/stdc++.h>
using namespace std;

int main(){
  deque<int> deq ;

  for( int i=1 ; i<7 ; i++){
    deq.push_front(i) ;
    for( int x=0 ; x<i ; x++){
      cout << deq[x] << " " ;
    }
    cout << endl ;
  }
  cout << deq.size() << endl ;

}
