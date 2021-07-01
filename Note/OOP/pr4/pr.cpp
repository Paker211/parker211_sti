#include <bits/stdc++.h>
using namespace std;

class Car{
  public:
    int speed(int maxSpeed){
      return maxSpeed;
    }
};

int main(){
  //Create Car1
  Car carObj1;
  cout << carObj1.speed( 299 ) << endl ;

  return 0 ;
}
