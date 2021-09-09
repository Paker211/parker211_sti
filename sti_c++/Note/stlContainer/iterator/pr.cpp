#include<bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v{1,2,3,4,5,6,7,8,9,10};
  // Method 1
  cout << "Method 1: " << endl ;
  for(int i=0; i<v.size(); i++) {
    cout << v[i] << " " ;
  }
  // Method 2
  vector<int>::iterator i ;
  cout << "\nMethod 2: " << endl ;
  for(i=v.begin(); i!=v.end(); i++) {
    cout << *i << " " ;
  }
  // Method 2
  cout << "\nMethod 3: " << endl ;
  for(i=v.begin(); i<v.end(); i++) {
    cout << *i << " " ;
  }
  cout << endl ;
}
