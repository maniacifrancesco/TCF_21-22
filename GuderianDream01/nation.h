#ifndef NATION_H
#define NATION_H

#include <vector>
#include "territory.h"
#include "division.h"
using std::vector;

class nation {    //factory astratta
public:
virtual ~nation(){};
virtual division* create_division() const = 0;

};





#endif // NATION_H
