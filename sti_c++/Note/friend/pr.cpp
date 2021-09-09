#include<bits/stdc++.h>
using namespace std ;


class girl {
  public :
    girl(string name_, int age_, int s) {
      name  = name_ ;
      age = age_ ;
      sweetScore = s ;
    }
    friend class boy ;
  private :
    string name ;
    int age ;
    int sweetScore ;
};

class boy {
  public :
    boy(string name_, int age_) {
      name = name_ ;
      age = age_ ;
    }
    void select(girl g1, girl g2) {
      int like1 = g1.sweetScore - g1.age ;
      int like2 = g2.sweetScore - g2.age ;
      if( like1 > like2 ) {
        cout << name << " like " << g1.name << " more than " << g2.name << " !!" << endl ;
      }
      else if( like1 < like2 ) {
        cout << name << " like " << g2.name << " more than " << g1.name << " !!" << endl ;
      }
      else {
        cout << "can not make decision!" << endl ;
      }
    }
  private :
    string name ;
    int age ;
};

int main() {
  boy boy1("Jack", 31) ;
  girl girl1("weiwei", 18, 60) ;
  girl girl2("nana", 22, 66) ;

  boy1.select(girl1, girl2) ;


}
