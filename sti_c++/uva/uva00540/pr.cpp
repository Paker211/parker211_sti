#include <bits/stdc++.h>
using namespace std;

// Global var
map<int, int> mp ;

int main() {
  // t: Team, n: each team quantity, x: serial number
  int t, n, x, Case=1 ;
  while( (cin >> t) && (t!=0) ) {
    mp.clear() ;
    int team_no = 0 ;
    for( ; team_no<t ; team_no++ ) {
      cin >> n ;
      for(int i=0 ; i<n ; i++ ) {
        cin >> x ;
        mp[x] = team_no ;
      }
    }

    cout << "Scenario #" << Case << endl ;
    queue <int> Q ;
    queue <int> q[t] ;
    string op ;
    while( (cin >> op) && (op!="STOP") ) {
      if( op=="ENQUEUE" ) {
        cin >> x ;
        if( mp.count(x) ) {
          if( q[mp[x]].empty() ){
            Q.push( mp[x] ) ;
          }
          q[mp[x]].push(x) ;
        }
        else {
          Q.push( 1000+x ) ;
        }
      }
      else { //op=="DEQUEUE"
        int team_now = Q.front() ;
        if( team_now >= 1000 ) {
          team_now -= 1000 ;
          cout << team_now << endl ;
          Q.pop() ;
        }
        else{
          cout << q[team_now].front() << endl ;
          q[team_now].pop() ;
          if( q[team_now ].empty() ) {
            Q.pop() ;
          }
        }
      }
      Caes++ ;
    }
  }
  return 0  ;
}
