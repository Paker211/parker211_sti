class Solution {
  public:
    bool isPalindrome(int x) {
      stringstream ss ; ss << x ;
      string s = ss.str() ;
      if( s[0]=='-' ) return false ;
      int len = s.length() ;
      for(int i=0; i<len/2; i++) {
        if( s[i]!=s[len-1-i] ) {
          return false ;
        }
      }
      return true ;
    }
};


class Solution {
  public:
    bool isPalindrome(int x) {
      if( x<0 || ( x%10==0 && x!=0 ) ) return false ;

      int revertNumber=0 ;
      while( x>revertNumber ) {
        revertNumber = revertNumber*10 + x%10 ;
        x /= 10 ;
      }

      return x==revertNumber || x==revertNumber/10 ;
    }
};
