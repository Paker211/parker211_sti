#include "class_demo4.h"

Demo::Demo() {
  set_a(1) ;
  set_b(1) ;
}

Demo::Demo(int n1) {
  set_a(n1) ;
  set_b(n1) ;
}

Demo::Demo(int n1, int n2) {
  set_a(n1) ;
  set_b(n2) ;
}

int Demo::do_something() {
  return get_a() + get_b() ;
}

void Demo::set_a(int n) {
  a = n ;
}

void Demo::set_b(int n) {
  b = n ;
}

int Demo::get_a() {
  return a ;
}

int Demo::get_b() {
  return b ;
}
