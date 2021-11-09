class Solution {
  public:
    int removeDuplicates(vector<int>& nums) {
      int currentMove=0 ;
      if( nums.size()==0 ) return 0 ;

      for(int i=0; i<nums.size(); ++i) {
        if( nums[i]==nums[currentMove] ) continue ;
        else nums[++currentMove] = nums[i] ;
      }
      return ++currentMove ;
    }
};
