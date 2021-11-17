class Solution {
  public :
    int strStr(string haystack, string needle) {
      int isSame=false ;
      if(needle.empty()) return 0 ;
      if((haystack.empty()) || (haystack.size() < needle.size())) return -1 ;

      for(int i=0; i<haystack.size()-needle.size()+1; ++i) {
        if( haystack[i] == needle[0] ) {
          for(int x=1; x<needle.size(); ++x) {
            if( haystack[i+x]==needle[x] ) {
              if(x==needle.size()-1) return i ;
            }
            else break ;
          }
        }
      }
      return -1 ;
    }
};
