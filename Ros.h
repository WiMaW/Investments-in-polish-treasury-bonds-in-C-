#include <iostream>
#include "Coi.h"
#ifndef ROS_H
#define ROS_H

class Ros: public Coi {
    private:
    const float time = 6.0;
    const float intrestFirstPeriod = 0.072;
    const float fee = 0.70;

    public:
    float calculateProfitInflationCapitalization(float amount, float intrest)
    {
        int timeWithoutFirstYear = time - 1.0;
        float profit1stYear = amount * intrestFirstPeriod;
        amount = amount + profit1stYear;
        float profitRest = 0;

        for (size_t i = 0; i < timeWithoutFirstYear; i++)
        {
            float profitRestPerYear = amount * intrest;
            amount = amount + profitRestPerYear;
            profitRest += profitRestPerYear;
        }
        float profit = profit1stYear + profitRest;
        return profit;
    }

};
#endif
