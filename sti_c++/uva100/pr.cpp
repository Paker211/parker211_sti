#include <bits/stdc++.h>
using namespace std;

int problem(int a){
  int counter_cycle=1 ;
  while( a!=1 ){
    counter_cycle++;
    if( a%2 ) a=3*a+1 ;
    else a/=2 ;
  }
  return counter_cycle;
}

int main(){
  int a1, a2;
  int max=0, tmp;
  while( cin >> a1 >> a2 ){
    max=0;
    for(int i=a1 ; i<=a2 ; i++){
      tmp = problem(i) ;
      if( tmp > max ) max = tmp ;
    }
    cout << "Output: " << a1 << " " << a2 << " " << max << endl ;
  }
}

