#include<bits/stdc++.h>
using namespace std ;

int start_up() {
  ios_base::sync_with_stdio(false) ;
  cin.tie(NULL) ;
  return 0 ;
}
int static r = start_up() ;
#define endl '\n' ;

template<class T>
class AddElements {
  T elem1 ;
};

// class( Float ) template specialization :
template<>
class AddElements<double> {
  double elem1 ;
  public :
  AddElements(double _elem1) { elem1 = _elem1 ; }
  double add(double elem2) { return elem1 + elem2 ; }
};


// class( Int ) template specialization :
template<>
class AddElements<int> {
  double elem1 ;
  public :
  AddElements(int _elem1) { elem1 = _elem1 ; }
  int add(int elem2) { return elem1 + elem2 ; }
};


// class( String ) template specialization :
template<>
class AddElements<string> {
  string elem1 ;
  public :
  AddElements(string _elem1) { elem1 = _elem1 ; }
  string concatenate(string elem2) { return elem1 + elem2 ; }
} ;





int main () {
  int n,i;
  cin >> n;
  for(i=0;i<n;i++) {
    string type;
    cin >> type;
    if(type=="float") {
        double element1,element2;
        cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        cout << myfloat.add(element2) << endl;
    }
    else if(type == "int") {
        int element1, element2;
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << endl;
    }
    else if(type == "string") {
        string element1, element2;
        cin >> element1 >> element2;
        AddElements<string> mystring (element1);
        cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}
