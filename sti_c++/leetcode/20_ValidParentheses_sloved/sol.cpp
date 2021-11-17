class Solution {
  public:
    bool isValid(string s) {
      stack<char> bracket ;
      char topChar ;

      for(int i=0; i<s.length(); ++i) {
        if((s[i]=='(') || (s[i]=='[') || (s[i]=='{')) {
          bracket.push( s[i] ) ;
        }
        else {
          if( bracket.empty() ) {
            return false ;
          }
          int topChar = bracket.top() ;
          bracket.pop() ;
          if( topChar=='{' && s[i]!='}' ) return false ;
          if( topChar=='[' && s[i]!=']' ) return false ;
          if( topChar=='(' && s[i]!=')' ) return false ;

        }
      }

      return bracket.empty() ;
    }
};
