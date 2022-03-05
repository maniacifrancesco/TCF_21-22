#ifndef RUSSIAN_FACTORY_H
#define RUSSIAN_FACTORY_H

#include <vector>
using std::vector;

#include "division.h"
#include "nation.h"
class RussianFactory : public nation{
public:
RussianFactory();
~RussianFactory();
int sizeUnit() const;
division get_division() const;

private:
division* unit;
};


#endif // RUSSIAN_FACTORY_H
