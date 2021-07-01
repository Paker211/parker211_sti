#include <bits/stdc++.h>
using namespace std;

class myclass{
  public:
    int square(int x){
      return x*x;
    }

    int square(int x, int y){
      return x*y ;
    }
};

int main(){
  myclass myObj;
  cout << myObj.square(10) << endl ;
  cout << myObj.square(8, 9) << endl ;

}

