#include <bits/stdc++.h>
using namespace std;

class myClass{
  public:
    int ca_var;
    int add(int a, int b);
};

int myClass::add(int a, int b){
  return a+b ;
}

int main(){
  //Create an Object
  myClass myObj;
  myObj.ca_var = 9;

  //Print
  cout << myObj.ca_var << endl ;
  cout << myObj.add(10, 5) << endl ;
}

