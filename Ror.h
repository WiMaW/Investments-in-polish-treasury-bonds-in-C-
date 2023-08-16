#include <iostream>
#include "Tos.h"
#ifndef ROR_H
#define ROR_H

class Ror: public Tos {
    private:
    const float time = 1.0;
    const float intrestFirstPeriod = 0.0675;
    const float fee = 0.50;

    public:
    float calculateProfitChangingInterest(float amount, float intrest)
    {
        float profit1stMonth = amount * (intrestFirstPeriod/12);
        float profitRest = amount * (intrest/12) * (time * 12 - 1);
        float profit = profit1stMonth + profitRest;
        return profit;
    }
};
#endif
