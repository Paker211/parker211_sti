class Solution {
  public:
    string longestCommonPrefix(vector<string>& strs) {
      string ans;
      char c;
      if(strs.size() < 1) return ans;
      for(int i=0; i<strs[0].size(); i++)
      {
        c = strs[0][i];
        for(auto s : strs)
          //i+1 > s.size() //if length is not enough, break
          if(i+1 > s.size() || c != s[i])
            return ans;
        ans.push_back(c);
      }
      return ans;
    }

    string longestCommonPrefix(vector<string>& strs) {
      string res ;
      char c ;
      if( strs.size()<1 ) return res ;

      for(int i=0; i<strs[0].size(); ++i) {
        c = strs[0][i] ;
        for(auto s: strs) {
          if(i+1 > s.size() || c!=s[i])
            return res ;
        }
        res.push_back(c) ;
      }
      return res ;
    }
};


