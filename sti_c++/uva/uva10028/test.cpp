#include <bits/stdc++.h>
using namespace std;

// Global variable
deque<string> deq ; // List
string word="" ;
int num=0 ;
string s ;

void moveList( string w ){
  deq.push_front( w ) ;
}

void printWord(){
  cout << word ;
  moveList( word );
  word = "" ;
}

void printNum(){
  string w = deq[ num-1 ] ;
  cout << w ;
  for(int i=num-1 ; i>0 ;i--){
    deq[i] = deq[i-1] ;
  }
  deq[0] = w ;
  num = 0 ;
}


//Main
int main(){
  while( getline(cin, s) ){
    if( s=="0" ) break ;
    s += "\n" ;

    for(int i=0 ; i<s.size() ; i++){
      if( isalpha(s[i]) ){ //whether an letter
        word += s[i] ;
      }
      else if( isdigit(s[i]) ){
        num *= 10 ;
        num += s[i]-'0' ;
      }
      else{
        if( num ) printNum();
        if( word != "" ) printWord();
        cout << s[i] ;
      }
    }
  }
  cout << endl ;
  return 0 ;
}
