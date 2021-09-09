#include<bits/stdc++.h>
using namespace std;

auto& addOne(auto &v) {
  for(auto& it : v) {
    it += 1 ;
  }
  return v ;
}

int main() {
  std::vector<int> x={12, -3, 6, 19};
  auto y = addOne( x ) ;
  for(auto& it : y) {
    cout << it << " " ;
  }
  cout << endl ;
  return 0 ;

}
