class Solution {
  public:
    int removeElement(vector<int>& nums, int val) {
      int removeCount=0 ;
      for(int i=0; i<nums.size(); ++i) {
        if( nums[i]==val ) {
          ++removeCount ;
        }
        else {
          nums[i-removeCount] =  nums[i];
        }
      }

      return nums.size()-removeCount ;
    }
};
