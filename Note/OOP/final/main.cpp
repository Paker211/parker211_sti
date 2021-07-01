#include <bits/stdc++.h>
#include "star_class.cpp"
using namespace std;

int main(){
  string name[10]={ "Sun", "Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto" };
  double distance[10]={ 0, 0.4, 0.7, 1.0, 1.5, 5.2, 9.5, 19.2, 30.1, 40 };
  double mess[10]={ 333000, 0.055, 0.815, 1.0, 0.107, 318, 95, 14, 17, 0.00218 };
  double radius[10]={ 696000, 2440, 6052, 6372, 3402, 68366, 60268, 25559, 24622, 24622, 1151 };

  star_class plane;
  cout << plane.starDistance(10.0,4.3) << endl ;

}

