class Solution {
  public:
    int romanToInt(string s) {
      int sum=0 ;
      map<char, int> romanValue ;

      romanValue['I'] = 1; romanValue['V'] = 5; romanValue['X'] = 10;
      romanValue['L'] = 50; romanValue['C'] = 100; romanValue['D'] = 500;
      romanValue['M'] = 1000;

      int len = s.length() ;
      for(int i=len-1; i>=0; i--) {
        if( (romanValue[s[i+1]] > romanValur[s[i]]) && (i!=len-1)) {
          sum -= romanValue[s[i]] ;
        }
        else {
          sum += romanValue[s[i]] ;
        }
      }
      return sum ;
    }
};
