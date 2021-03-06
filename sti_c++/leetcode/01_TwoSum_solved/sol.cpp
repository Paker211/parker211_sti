class Solution {
public:
    vector<int> twoSum1(vector<int>& nums, int target) {
      for(int i=0; i<nums.size(); ++i) {
        for(int j=i+1; j<nums.size(); ++j) {
          int sum = nums[i] + nums[j] ;
          if( sum==target ) {
            return {i, j} ;
          }
        }
      }
      return {} ;
    }

    vector<int> twoSum2(vector<int>& nums, int target) {
      unordered_map<int,int> indies ;
      for(int i=0; i<nums.size(); ++i) {
        indies[nums[i]] = i ;
      }

      for(int i=0; i<nums.size(); ++i) {
        int left = target - nums[i] ;
        if(indies.count(left) && indies[left]!=i ) {
          return{i, indies[left]} ;
        }
      }

      return {} ;
    }
};
