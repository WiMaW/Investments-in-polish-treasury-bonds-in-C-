#include <iostream>

//procenty
const float NBP = 0.0675;
const float inflation = 0.108;
const float tax = 0.19;

int main(void)
{
    //list
    std::cout<<"----------------------------------------"<<std::endl;
    std::cout<<"I. Obligacje o oprocentowaniu stalym"<<std::endl;
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

    //calculation
    switch (choice)
    {
    case 1:
        /* code */
        break;
    case 2:
        /* code */
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
