#include<bits/stdc++.h>
using namespace std ;

int main(int argc, char *argv[]) {
  std::ostream *prevstr ;
  std::ofstream ofs ;
  ofs.open("test.txt") ;

  std::cout << "tie example:\n" ;

  *std::cin.tie() << "This is inserted into  cout\n" ;
  prevstr = std::cin.tie( &ofs ) ;
  *std::cin.tie() << "This is inserted into file\n" ;
  std::cin.tie( prevstr ) ;

  ofs.close() ;
  system("pause") ;

  return 0 ;
}
