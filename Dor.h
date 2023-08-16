#include <iostream>
#include "Ror.h"
#ifndef DOR_H
#define DOR_H

class Dor: public Ror {
    private:
    const float time = 2.0;
    const float intrestFirstPeriod = 0.0685;
    const float fee = 0.50;
};
#endif
