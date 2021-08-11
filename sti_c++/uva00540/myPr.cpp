#include <bits/stdc++.h>
using namespace std ;

int main() {
  int teamQuantity, eachTeamQuantity, teamMember ;
  int Case=1 ;
  map<int,int> mp ; // key:value --> teamMember:teamSerial
  while( (cin >> teamQuantity) && (teamQuantity!=0) ) {
    mp.clear() ;
    // Input data -----
    int teamSerial=0 ;
    for( ; teamSerial<teamQuantity ; teamSerial++ ) {
      cin >> eachTeamQuantity ;
      for(int i=0 ; i<eachTeamQuantity ; i++ ) {
        cin >> teamMember ;
        mp[teamMember] = teamSerial ;
      }
    }
    // -----

    cout << "Scenario #" << Case++ << endl ;
    queue<int> bigTeam ;
    queue<int> eachTeamOrder[teamQuantity] ; // represent teamSerial
    string op ;
    while( cin >> op ) {
      if( op == "ENQUEUE" ) {
        cin >> teamMember ;
        if( eachTeamOrder[mp[teamMember]].size() == 0 ) {
          bigTeam.push( mp[teamMember] ) ;
        }
        eachTeamOrder[mp[teamMember]].push( teamMember ) ;
      }
      else if( op == "DEQUEUE" ) {
        int frontTeam = bigTeam.front() ;
        cout << eachTeamOrder[frontTeam].front() << endl ;
        eachTeamOrder[frontTeam].pop() ;
        if( eachTeamOrder[frontTeam].size() == 0 ) {
          bigTeam.pop() ;
        }
      }
      else if( op == "STOP" ) {
        cout << endl ;
        break ;
      }
    }
  }
}
