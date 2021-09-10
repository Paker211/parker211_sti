#include<bits/stdc++.h>
using namespace std;

class cloth {
  public :
    cloth() {}
    cloth(string color_, int price_) {
      color = color_ ;
      price = price_ ;
    }
    friend class person ;
  private :
    string color ;
    int price ;
};

class person {
  public :
    person(string name_, int age_) {
      name = name_ ;
      age = age_ ;
      isWearJacket = false ;
      isWearShirt = false ;
    }
    void wearJacket(cloth cloth1) {
      jacket = cloth1 ;
      isWearJacket = true ;
    }
    void wearShirt(cloth cloth1) {
      shirt = cloth1 ;
      isWearShirt = true ;
    }
    void takeOffJacket() {
      isWearJacket = false ;
    }
    void takeoffShirt() {
      isWearShirt = false ;
    }
    void getWearCondition() {
      if( (isWearShirt) && (isWearJacket) ) {
        cout << name << " wear " << shirt.color << " shirt and " << jacket.color << " jacket!" << endl ;
      }
      else if(isWearJacket) {
        cout << name << " wear " << jacket.color << " jacket and no shirt." << endl ;
      }
      else if( isWearShirt ) {
        cout << name << " wear " << shirt.color << " shirt and no jacket." << endl ;
      }
    }
  private :
    cloth jacket, shirt ;
    string name ;
    int age ;
    bool isWearJacket ;
    bool isWearShirt ;
};

int main() {
  person person1("nana", 20) ;
  cloth cloth1("blue", 600) ;
  person1.wearShirt( cloth1 ) ;
  person1.getWearCondition() ;

}
