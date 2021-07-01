#include <bits/stdc++.h>
using namespace std;

class Car{
  public:
    string brand ;
    string model ;
    int year ;
};

int main(){
  //Create Car1
  Car carObj1;
  carObj1.brand = "BMW" ;
  carObj1.model = "X5" ;
  carObj1.year = 1999 ;

  //Create Car2
  Car carObj2;
  carObj2.brand = "Ford" ;
  carObj2.model = "Mustang" ;
  carObj2.year = 1995 ;

  //Print
  cout << carObj1.brand << " "<< carObj1.model << " " << carObj1.year << endl;
  cout << carObj2.brand << " "<< carObj2.model << " " << carObj2.year << endl;

}
