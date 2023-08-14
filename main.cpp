#include <iostream>

//procenty
const float NBP = 0.0675;
const float INFLATION = 0.108;
const float TAX = 0.19;

float calculateProfit(float amount, float time, float intrest);
float calculateTax(float profit, float constTax);
float calculateProfitAfterTax(float profit, float tax);
float calculateWithdrawlCosts(float amount, float fee);
void displayCalculations(float amount, float time, float profit, float calculatedTax, float profitAfterTax, float withdrawlCosts);

int main(void)
{
    //list
    std::cout<<"----------------------------------------"<<std::endl;
    std::cout<<"I. Obligacje o oprocentowaniu stalym - odsetki przy wykupie"<<std::endl;
    std::cout<<"1. 3 miesięczne OTS - 3.00 %"<<std::endl;
    std::cout<<"2. 3 letnie TOS - 6.85 %"<<std::endl;
    std::cout<<"----------------------------------------"<<std::endl;
    std::cout<<"II. Obligacje o oprocentowaniu zmiennym"<<std::endl;
    std::cout<<"3. 1 rok ROR - 6.75 %"<<std::endl;
    std::cout<<"4. 2 letnie DOR - 6.85 %"<<std::endl;
    std::cout<<"----------------------------------------"<<std::endl;
    std::cout<<"III. Obligacje indeksowane inflacją"<<std::endl;
    std::cout<<"5. 4 letnie COI - 7.00 %"<<std::endl;
    std::cout<<"6. 6 letnie ROS - 7.20 %"<<std::endl;
    std::cout<<"7. 10 letnie EDO - 7.25 %"<<std::endl;
    std::cout<<"8. 12 letnie ROD - 7.50 %"<<std::endl;
    std::cout<<"----------------------------------------"<<std::endl;
    std::cout<<std::endl;

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

    float time = 0; //in years
    float intrest = 0; //per year
    float profit = 0;
    float calculatedTax = 0;
    float profitAfterTax = 0;
    float withdrawlCosts = 0;
    float fee = 0;

    //calculation
    switch (choice)
    {
    case 1: //OTS
        time = 0.25;
        intrest = 0.03;
        profit = calculateProfit(amount, time, intrest);
        calculatedTax = calculateTax(profit, TAX);
        profitAfterTax = calculateProfitAfterTax(profit, calculatedTax);
        withdrawlCosts = 0;
        displayCalculations(amount, time, profit, calculatedTax, profitAfterTax, withdrawlCosts);
        break;
    case 2: //TOS
        time = 3.0;
        intrest = 0.0685;
        profit = calculateProfit(amount, time, intrest);
        calculatedTax = calculateTax(profit, TAX);
        profitAfterTax = calculateProfitAfterTax(profit, calculatedTax);
        fee = 0.70;
        withdrawlCosts = calculateWithdrawlCosts(amount, fee);
        displayCalculations(amount, time, profit, calculatedTax, profitAfterTax, withdrawlCosts);
        break;
    case 3:
        /* code */
        break;
    case 4:
        /* code */
        break;
    case 5:
        /* code */
        break;
    case 6:
        /* code */
        break;
    case 7:
        /* code */
        break;
    case 8:
        /* code */
        break;
    default:
        break;
    }

    return 0;
}

float calculateProfit(float amount, float time, float intrest)
{
    float profit = amount * time * intrest;
    return profit;
}
float calculateTax(float profit, float constTax)
{
    float calculatedTax = profit * constTax;
    return calculatedTax;
}
float calculateProfitAfterTax(float profit, float calculatedtax)
{
    float profitAfterTax = profit - calculatedtax;
    return profitAfterTax;
}
float calculateWithdrawlCosts(float amount, float fee)
{
    float withdrawalCosts = (amount / 100) * fee;
    return withdrawalCosts;
}
void displayCalculations(float amount, float time, float profit, float calculatedTax, float profitAfterTax, float withdrawlCosts)
{
    std::cout<<std::endl;
    std::cout<<"----------------------------------------"<<std::endl;
    std::cout<<"Wyliczenia dla kwoty "<<amount<<" zl"<<" po "<<time<<" latach"<<std::endl;
    std::cout<<"----------------------------------------"<<std::endl;
    std::cout<<"Zysk:             "<<profit<<" zl"<<std::endl;
    std::cout<<std::endl;
    std::cout<<"Podatek:          "<<calculatedTax<<" zl"<<std::endl;
    std::cout<<std::endl;
    std::cout<<"Zysk po podatku:  "<<profitAfterTax<<" zl"<<std::endl;
    std::cout<<std::endl;
    std::cout<<"Koszty wycofania: "<<withdrawlCosts<<" zl"<<std::endl;
    std::cout<<"Jeśli oplata przewysza odsetki - ograniczona do ich wysokosci"<<std::endl;
    std::cout<<std::endl;
    std::cout<<"----------------------------------------"<<std::endl;
}
