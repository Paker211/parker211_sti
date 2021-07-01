#include <bits/stdc++.h>
using namespace std;

class myClass{
  public:
    int myNum ;
    string myString ;
};

int main(){
  //Create an object of myClass
  myClass myObj ;

  //Give value
  myObj.myNum = 15 ;
  myObj.myString = "I am handsome";

  //Print
  cout << myObj.myNum << endl;
  cout << myObj.myString << endl;
}
