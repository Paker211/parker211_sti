#ifndef STAR_CLASS_H_INCLUDED
#define STAR_CLASS_H_INCLUDED

#include <string>
using namespace std;

class star_class{
  public:
    double star_a, star_b;
    double starDistance(double star_a, double star_b);
    double messRatio(double mess_a, double mess_b);
    double volumeRatio(double volume_a, double volume_b);
};

#endif
