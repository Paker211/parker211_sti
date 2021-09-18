#include<bits/stdc++.h>
using namespace std ;

template<class T>
class Vector{
  private :
    T* v ;
    int sz ;
  public :
    static int count ;
    Vector(int size) ;
    ~Vector() ;
    T& elem(int t) { return v[i] ; }
    T& operator[](int i) ;
};

template<> class Vector(void*) {
  public :
    void** p ;
    Vector(int size) {
      p = new void*[size] ;
    }
    ~Vector() {
    }

    void*& elem(int i) { return p[i] ; }
    void*& operator[](int i) { return p[i] ; }
}

template<class T> class Vector<T*>:private Vector<void*> {
  public :
    typeof Vector<void*> Base ;
    explicit Vector(int size): Base(size) {
    }
    ~Vector() {
    }
    T*& operator[](int i) {
      static T* t=(T*)Base::elem(i) ;
      return t ;
    }
};



int main() {

}
