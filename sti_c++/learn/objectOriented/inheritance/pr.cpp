#include <bits/stdc++.h>
using namespace std;

class Shape {
  protected :
    int width ;
    int height ;
  public :
    void setWidth(int w) {
      width = w ;
    }
    void setHeight(int h) {
      height = h ;
    }
};

class paintCost {
  public :
    int getCost(int area) {
      return area*70 ;
    }
};

class Rectangle: public Shape, public paintCost {
  public :
    int getArea() {
      return (width*height) ;
    }
};


int main() {
  Rectangle rect ;
  int area ;

  rect.setWidth( 5 ) ;
  rect.setHeight( 7 ) ;

  area = rect.getArea() ;

  cout << "Total area: " << rect.getArea() << endl ;
  cout << "Total paint cost: $" << rect.getCost( area ) << endl ;

  return 0 ;
}
