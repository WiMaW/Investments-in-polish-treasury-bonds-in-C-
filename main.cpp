#include <iostream>
#include "Ots.h"
#include "Tos.h"
#include "Ror.h"
#include "Dor.h"
#include "Coi.h"
#include "Ros.h"
#include "Edo.h"
#include "Rod.h"

//procenty
const float NBP = 0.0675;
const float INFLATION = 0.108;
const float TAX = 0.19;

void displayMenu();

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
    float intrest = 0; //per year
    float profit = 0;
    float calculatedTax = 0;
    float profitAfterTax = 0;
    float withdrawlCosts = 0;

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

    if (choice == 6)
    {
        Ros Shares6;
        intrest = INFLATION + 0.015;
        profit = Shares6.calculateProfitInflationCapitalization(amount, intrest);
        calculatedTax = Shares6.calculateTax(profit, TAX);
        profitAfterTax = Shares6.calculateProfitAfterTax(profit, calculatedTax);
        withdrawlCosts = Shares6.calculateWithdrawlCosts(amount);
        Shares6.displayCalculationsTos(amount, profit, calculatedTax, profitAfterTax, withdrawlCosts);
    }

    if (choice == 7)
    {
        Edo Shares7;
        intrest = INFLATION + 0.015;
        profit = Shares7.calculateProfitInflationCapitalization(amount, intrest);
        calculatedTax = Shares7.calculateTax(profit, TAX);
        profitAfterTax = Shares7.calculateProfitAfterTax(profit, calculatedTax);
        withdrawlCosts = Shares7.calculateWithdrawlCosts(amount);
        Shares7.displayCalculationsTos(amount, profit, calculatedTax, profitAfterTax, withdrawlCosts);
    }

    if (choice == 8)
    {
        Rod Shares8;
        intrest = INFLATION + 0.0175;
        profit = Shares8.calculateProfitInflationCapitalization(amount, intrest);
        calculatedTax = Shares8.calculateTax(profit, TAX);
        profitAfterTax = Shares8.calculateProfitAfterTax(profit, calculatedTax);
        withdrawlCosts = Shares8.calculateWithdrawlCosts(amount);
        Shares8.displayCalculationsTos(amount, profit, calculatedTax, profitAfterTax, withdrawlCosts);
    }

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
