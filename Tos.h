#include <iostream>
#include "Ots.h"
#ifndef TOS_H
#define TOS_H

class Tos: public Ots {

    private:
    const float time = 3.0;
    const float intrest = 0.0685;
    const float fee = 0.70;

    public:
    float calculateProfitCapitalization(float amount)
    {
        float profit = 0;

        for (size_t i = 0; i < time; i++)
        {
            float profitPerYear = amount * intrest;
            amount = amount + profitPerYear;
            profit += profitPerYear;
        }
        return profit;
    }

    float calculateWithdrawlCosts(float amount)
    {
        float withdrawalCosts = (amount / 100) * fee;
        return withdrawalCosts;
    }

    void displayCalculationsTos(float amount, float profit, float calculatedTax, float profitAfterTax, float withdrawlCosts)
    {
        std::cout<<std::endl;
        std::cout<<"--------------------------------------------------"<<std::endl;
        std::cout<<"Calculations for the amount "<<amount<<" PLN"<<" after "<<time<<" years"<<std::endl;
        std::cout<<"--------------------------------------------------"<<std::endl;
        std::cout<<"Profit:             "<<profit<<" PLN"<<std::endl;
        std::cout<<std::endl;
        std::cout<<"Tax:          "<<calculatedTax<<" PLN"<<std::endl;
        std::cout<<std::endl;
        std::cout<<"Profit after tax:  "<<profitAfterTax<<" PLN"<<std::endl;
        std::cout<<std::endl;
        std::cout<<"Withdrawal costs: "<<withdrawlCosts<<" PLN"<<std::endl;
        std::cout<<std::endl;
        std::cout<<"--------------------------------------------------"<<std::endl;
    }
};

#endif
