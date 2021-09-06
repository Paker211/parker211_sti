#include <bits/stdc++.h>
using namespace std;

class Line {
  private :
    double length ;
  public :
    void setLength( double len ) ;
    double getLength( void ) ;
    Line() ;
    ~Line() ;
};

Line::Line( void ) {
  cout << "Object is being created." << endl ;
}

Line::~Line( void ) {
  cout << "Object is being deleted." << endl ;
}

void Line::setLength( double len ) {
  length = len ;
}
double Line::getLength( void ) {
  return length ;
}


int main() {
  Line line ;

  line.setLength( 6.0 ) ;
  cout << "Length of line: " << line.getLength() << endl ;
  line.setLength( 10.0 ) ;
  cout << "Length of line: " << line.getLength() << endl ;

  return 0 ;
}
