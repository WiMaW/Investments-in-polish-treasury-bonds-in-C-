#include <iostream>
#include "Edo.h"
#ifndef ROD_H
#define ROD_H

class Rod: public Edo {
    private:
    const float time = 12.0;
    const float intrestFirstPeriod = 0.075;
    const float fee = 2.0;
};
#endif
