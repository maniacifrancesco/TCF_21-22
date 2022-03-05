#ifndef GERMAN_FACTORY_H
#define GERMAN_FACTORY_H

#include <vector>
using std::vector;

#include "division.h"
#include "nation.h"
class GermanFactory : public nation{
public:
GermanFactory();
~GermanFactory();
int sizeUnit() const;
division get_division() const;

private:
division* unit;
};

#endif // GERMAN_FACTORY_H
