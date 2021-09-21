#include<iostream>
using namespace std;
/*
class Complex {
  public:
    int a, b;
    void input( string s ) {
      int v1=0; int i=0;
      while( s[i]!='+' ) {
        v1=v1*10+s[i]-'0';
        i++;
      }
      while((s[i]==' ') || (s[i]=='+') || (s[i]=='i')) {
        i++;
      }
      int v2=0;
      while(i<s.length()) {
        v2=v2*10+s[i]-'0';
        i++;
      }
      a=v1; b=v2;
    }
};
*/

class Complex {
  public :
    int a, b ;
    void input( string s ) {
      int v1=0, v2=0, i=0 ;
      bool v1Negative=false, v2Negative=false ;
      while( true ) {
        if( s[i] == '-' ) {
          v1Negative = true ;
          i++ ;
        }
        while( isdigit(s[i]) ) {
          v1=v1*10+s[i]-'0' ;
          i++ ;
        }
        while((s[i]==' ') || (s[i]=='+') || (s[i]=='i') || (s[i]=='-') ) {
          if( s[i] == '-' ) v2Negative=true ;
          i++;
        }
        while( i<s.length() ) {
          v2=v2*10+s[i]-'0' ;
          i++ ;
        }
        break ;
      }
      if( v1Negative ) v1=-v1 ;
      if( v2Negative ) v2=-v2 ;
      a=v1; b=v2;
    }
};

ostream& operator <<(ostream& os, const Complex& c) {
  return os << c.a << (c.b > 0 ? '+' : '-') << 'i' << c.b ;
}

Complex operator +(const Complex& a, const Complex& b) {
  Complex temp ;
  temp.a = a.a + b.a ;
  temp.b = a.b + b.b ;
  return temp ;
}


int main()
{
  Complex x, y;
  string s1, s2;
  cin >> s1;
  cin >> s2;
  x.input( s1 );
  y.input( s2 );
  Complex z=x+y;
  cout << z << endl;
}

