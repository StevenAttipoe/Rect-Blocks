#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cmath>
using namespace std ;

#ifndef Block_H //Header guard 
#define Block_H

struct Rect { //define a block struct
int width,height,length;
};

struct sqrRect { //define a block struct
int width,length;
};

struct cubiod { //define a block struct
int length;
};

struct cylinder { //define a block struct
int diameter,height;
};

//No struct for Sphere since its t

#endif