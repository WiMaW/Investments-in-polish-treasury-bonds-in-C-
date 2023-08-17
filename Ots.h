#include <iostream>
#ifndef OTS_H
#define OTS_H

class Ots {
    private:
    const float time = 0.25;
    const float intrest = 0.03;
    const float withdrawlCosts = 0;

    public:
    float calculateProfit(float amount)
    {
    float profit = amount * time * intrest;
    return profit;
    }

    float calculateTax(float profit, float constTax)
    {
        float calculatedTax = profit * constTax;
        return calculatedTax;
    }

    float calculateProfitAfterTax(float profit, float tax)
    {
        float profitAfterTax = profit - tax;
        return profitAfterTax;
    }

    void displayCalculations(float amount, float profit, float calculatedTax, float profitAfterTax)
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
