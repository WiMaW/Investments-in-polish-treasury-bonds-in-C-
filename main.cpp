#include <iostream>
#include "Ots.h"
#include "Tos.h"
#include "Ror.h"
#include "Dor.h"
#include "Coi.h"

//procenty
const float NBP = 0.0675;
const float INFLATION = 0.108;
const float TAX = 0.19;

void displayMenu();
// float calculateProfit(float amount, float time, float intrest);
// float calculateProfitCapitalization(float amount, float time, float intrest);
// float calculateTax(float profit, float constTax);
// float calculateProfitChangingInterest(float amount, float time, float intrest, float intrestFirstPeriod);
// float calculateProfitInflation(float amount, float time, float intrest, float intrestFirstPeriod);
// float calculateProfitInflationCapitalization(float amount, float time, float intrest, float intrestFirstPeriod);
// float calculateProfitAfterTax(float profit, float tax);
// float calculateWithdrawlCosts(float amount, float fee);
// void displayCalculations(float amount, float time, float profit, float calculatedTax, float profitAfterTax, float withdrawlCosts);

int main(void)
{
    //display Menu
    displayMenu();

    //choice
    int choice = 0;
    do
    {
        std::cout<<"Wybierz obligacje: "<<std::endl;
        std::cin>>choice;
    } while (choice < 0 || choice > 9);


    //amount of money to invest
    float amount = 0;
    do
    {
        std::cout<<"Podaj kwote inwestycji"<<std::endl;
        std::cin>>amount;
    } while (amount < 0);

    //variables to use in calculations
    float time = 0; //in years
    float intrest = 0; //per year
    float intrestFirstPeriod = 0;
    float profit = 0;
    float calculatedTax = 0;
    float profitAfterTax = 0;
    float withdrawlCosts = 0;
    float fee = 0;

    //calculation
    if (choice == 1)
    {
        Ots Shares1;
        profit = Shares1.calculateProfit(amount);
        calculatedTax = Shares1.calculateTax(profit, TAX);
        profitAfterTax = Shares1.calculateProfitAfterTax(profit, calculatedTax);
        Shares1.displayCalculations(amount, profit, calculatedTax, profitAfterTax);
    }

    if (choice == 2)
    {
        Tos Shares2;
        profit = Shares2.calculateProfitCapitalization(amount);
        calculatedTax = Shares2.calculateTax(profit, TAX);
        profitAfterTax = Shares2.calculateProfitAfterTax(profit, calculatedTax);
        withdrawlCosts = Shares2.calculateWithdrawlCosts(amount);
        Shares2.displayCalculationsTos(amount, profit, calculatedTax, profitAfterTax, withdrawlCosts);
    }

    if (choice == 3)
    {
        Ror Shares3;
        profit = Shares3.calculateProfitChangingInterest(amount, NBP);
        calculatedTax = Shares3.calculateTax(profit, TAX);
        profitAfterTax = Shares3.calculateProfitAfterTax(profit, calculatedTax);
        withdrawlCosts = Shares3.calculateWithdrawlCosts(amount);
        Shares3.displayCalculationsTos(amount, profit, calculatedTax, profitAfterTax, withdrawlCosts);
    }

    if (choice == 4)
    {
        intrest = NBP + 0.001;
        Dor Shares4;
        profit = Shares4.calculateProfitChangingInterest(amount, intrest);
        calculatedTax = Shares4.calculateTax(profit, TAX);
        profitAfterTax = Shares4.calculateProfitAfterTax(profit, calculatedTax);
        withdrawlCosts = Shares4.calculateWithdrawlCosts(amount);
        Shares4.displayCalculationsTos(amount, profit, calculatedTax, profitAfterTax, withdrawlCosts);
    }

    if (choice == 5)
    {
        Coi Shares5;
        intrest = INFLATION + 0.01;
        profit = Shares5.calculateProfitInflation(amount, intrest);
        calculatedTax = Shares5.calculateTax(profit, TAX);
        profitAfterTax = Shares5.calculateProfitAfterTax(profit, calculatedTax);
        withdrawlCosts = Shares5.calculateWithdrawlCosts(amount);
        Shares5.displayCalculationsTos(amount, profit, calculatedTax, profitAfterTax, withdrawlCosts);
    }
    // case 6: //ROS
    //     time = 6.0;
    //     intrestFirstPeriod = 0.072;
    //     intrest = INFLATION + 0.015;
    //     profit = calculateProfitInflationCapitalization(amount, time, intrest, intrestFirstPeriod);
    //     calculatedTax = calculateTax(profit, TAX);
    //     profitAfterTax = calculateProfitAfterTax(profit, calculatedTax);
    //     fee = 0.70;
    //     withdrawlCosts = calculateWithdrawlCosts(amount, fee);
    //     displayCalculations(amount, time, profit, calculatedTax, profitAfterTax, withdrawlCosts);
    //     break;
    // case 7: //EDO
    //     time = 10.0;
    //     intrestFirstPeriod = 0.072;
    //     intrest = INFLATION + 0.015;
    //     profit = calculateProfitInflationCapitalization(amount, time, intrest, intrestFirstPeriod);
    //     calculatedTax = calculateTax(profit, TAX);
    //     profitAfterTax = calculateProfitAfterTax(profit, calculatedTax);
    //     fee = 2.0;
    //     withdrawlCosts = calculateWithdrawlCosts(amount, fee);
    //     displayCalculations(amount, time, profit, calculatedTax, profitAfterTax, withdrawlCosts);
    //     break;
    // case 8: //ROD
    //     time = 12.0;
    //     intrestFirstPeriod = 0.075;
    //     intrest = INFLATION + 0.0175;
    //     profit = calculateProfitInflationCapitalization(amount, time, intrest, intrestFirstPeriod);
    //     calculatedTax = calculateTax(profit, TAX);
    //     profitAfterTax = calculateProfitAfterTax(profit, calculatedTax);
    //     fee = 2.0;
    //     withdrawlCosts = calculateWithdrawlCosts(amount, fee);
    //     displayCalculations(amount, time, profit, calculatedTax, profitAfterTax, withdrawlCosts);
    //     break;
    // default:
    //     break;
    // }

    return 0;
}

void displayMenu()
{
    //list
    std::cout<<"----------------------------------------"<<std::endl;
    std::cout<<"I. Obligacje o oprocentowaniu stalym - odsetki przy wykupie"<<std::endl;
    std::cout<<"1. 3 miesięczne OTS - 3.00 %"<<std::endl;
    std::cout<<"2. 3 letnie TOS - 6.85 %"<<std::endl;
    std::cout<<"----------------------------------------"<<std::endl;
    std::cout<<"II. Obligacje o oprocentowaniu zmiennym - odsetki co miesiąc"<<std::endl;
    std::cout<<"3. 1 rok ROR - 6.75 %"<<std::endl;
    std::cout<<"4. 2 letnie DOR - 6.85 %"<<std::endl;
    std::cout<<"----------------------------------------"<<std::endl;
    std::cout<<"III. Obligacje indeksowane inflacją"<<std::endl;
    std::cout<<"5. 4 letnie COI - 7.00 %, odsetki co roku"<<std::endl;
    std::cout<<"6. !Rodzinne 6 letnie ROS - 7.20 %, odsetki przy wykupie, kapitalizowane"<<std::endl;
    std::cout<<"7. 10 letnie EDO - 7.25 %, odsetki przy wykupie, kapitalizowane"<<std::endl;
    std::cout<<"8. !Rodzinne 12 letnie ROD - 7.50 %, odsetki przy wykupie, kapitalizowane"<<std::endl;
    std::cout<<"----------------------------------------"<<std::endl;
    std::cout<<std::endl;
}
// float calculateProfit(float amount, float time, float intrest)
// {
//     float profit = amount * time * intrest;
//     return profit;
// }

// float calculateProfitCapitalization(float amount, float time, float intrest)
// {
//     float profit = 0;

//     for (size_t i = 0; i < time; i++)
//     {
//         float profitPerYear = amount * intrest;
//         amount = amount + profitPerYear;
//         profit += profitPerYear;
//     }

//     return profit;
// }


// float calculateProfitChangingInterest(float amount, float time, float intrest, float intrestFirstPeriod)
// {
//     float profit1stMonth = amount * (intrestFirstPeriod/12);
//     float profitRest = amount * (intrest/12) * (time * 12 - 1);
//     float profit = profit1stMonth + profitRest;
//     return profit;
// }

// float calculateProfitInflation(float amount, float time, float intrest, float intrestFirstPeriod)
// {
//     float timeWithoutFirstYear = time - 1.0;
//     float profit1stYear = amount * intrestFirstPeriod;
//     float profitRest = amount * intrest * timeWithoutFirstYear;
//     float profit = profit1stYear + profitRest;
//     return profit;
// }

// float calculateProfitInflationCapitalization(float amount, float time, float intrest, float intrestFirstPeriod)
// {
//     int timeWithoutFirstYear = time - 1.0;
//     float profit1stYear = amount * intrestFirstPeriod;
//     amount = amount + profit1stYear;
//     float profitRest = 0;

//     for (size_t i = 0; i < timeWithoutFirstYear; i++)
//     {
//         float profitRestPerYear = amount * intrest;
//         amount = amount + profitRestPerYear;
//         profitRest += profitRestPerYear;
//     }
//     float profit = profit1stYear + profitRest;
//     return profit;
// }

// float calculateTax(float profit, float constTax)
// {
//     float calculatedTax = profit * constTax;
//     return calculatedTax;
// }
// float calculateProfitAfterTax(float profit, float calculatedtax)
// {
//     float profitAfterTax = profit - calculatedtax;
//     return profitAfterTax;
// }
// float calculateWithdrawlCosts(float amount, float fee)
// {
//     float withdrawalCosts = (amount / 100) * fee;
//     return withdrawalCosts;
// }
// void displayCalculations(float amount, float time, float profit, float calculatedTax, float profitAfterTax, float withdrawlCosts)
// {
//     std::cout<<std::endl;
//     std::cout<<"----------------------------------------"<<std::endl;
//     std::cout<<"Wyliczenia dla kwoty "<<amount<<" PLN"<<" po "<<time<<" latach"<<std::endl;
//     std::cout<<"----------------------------------------"<<std::endl;
//     std::cout<<"Zysk:             "<<profit<<" PLN"<<std::endl;
//     std::cout<<std::endl;
//     std::cout<<"Podatek:          "<<calculatedTax<<" PLN"<<std::endl;
//     std::cout<<std::endl;
//     std::cout<<"Zysk po podatku:  "<<profitAfterTax<<" PLN"<<std::endl;
//     std::cout<<std::endl;
//     std::cout<<"Koszty wycofania: "<<withdrawlCosts<<" PLN"<<std::endl;
//     std::cout<<std::endl;
//     std::cout<<"----------------------------------------"<<std::endl;
// }
