#include <bits/stdc++.h>
using namespace std;

bool cmp( int a, int b) {
  // '>' --> sort lorage to small
  // '<' --> sort small to large
  return a > b;
}

int main(){
  int arr[6]={3,2,6,4,1,5} ;
  sort(arr, arr+6 , cmp);

  for(int i=0 ; i<6 ; i++) cout << arr[i] << " " ;
  cout << endl ;

}
