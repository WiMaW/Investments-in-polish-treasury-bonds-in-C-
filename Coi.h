#include <iostream>
#include "Dor.h"
#ifndef COI_H
#define COI_H

class Coi: public Dor {
    private:
    const float time = 4.0;
    const float intrestFirstPeriod = 0.07;
    const float fee = 0.70;

    public:
    float calculateProfitInflation(float amount, float intrest)
    {
        float timeWithoutFirstYear = time - 1.0;
        float profit1stYear = amount * intrestFirstPeriod;
        float profitRest = amount * intrest * timeWithoutFirstYear;
        float profit = profit1stYear + profitRest;
        return profit;
    }

};
#endif
