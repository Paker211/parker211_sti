#include <bits/stdc++.h>
using namespace std ;

class Solution {
  public:
    int removeDuplicates(vector<int>& nums) {
      if( nums.size() == 0 ) return 0 ;

      int current_move = 0 ;
      for(int i=0; i<nums.size(); ++i) {
        if(nums[i]==nums[current_move]) {
          cout << "current: " << current_move << " ,i:" << i << endl ;
          cout << "current val: " << nums[current_move] << " ,i val:" << nums[i] << endl ;
          cout << endl ;
          continue ;
        }
        else {
          cout << "current: " << current_move << " ,i:" << i << endl ;
          cout << "current val: " << nums[current_move] << " ,i val:" << nums[i] << endl ;
          nums[++current_move] = nums[i] ;
          cout << endl ;
        }
      }
      return current_move+1 ;
    }
};

int main() {
  vector<int> v;
  v.push_back(0) ; v.push_back(0) ;
  v.push_back(1) ; v.push_back(1) ; v.push_back(1) ;
  v.push_back(2) ; v.push_back(2) ;
  v.push_back(3) ; v.push_back(3) ;
  v.push_back(4) ;

  Solution sol ;

  sol.removeDuplicates(v) ;


}
