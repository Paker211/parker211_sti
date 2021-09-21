#include "star_class.h"
#include <iostream>

using namespace std;

double star_class::starDistance(double star_a, double star_b){
  if( star_a > star_b ){
    return star_a-star_b;
  }
  else{
    return star_a-star_b;
  }
}

double star_class::messRatio(double mess_a, double mess_b){
  return mess_a/mess_b;
}

double star_class::volumeRatio(double volume_a, double volume_b){
  return volume_a/volume_b ;
}


