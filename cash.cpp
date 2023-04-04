#include <iostream>
#include <math.h>

int main(void)
{
    //Variables for coins
    int quarters = 0, dimes = 0, nickels = 0, pennies = 0;
    float dollars = 0;
    //Get user input
    do
    {
        std::cout << "Change Owed: ";
        std:cin >> dollars;
    }
    while (dollars < 0);
    //Convert to cents
    int cents = round(dollars * 100);
    //Computes num of coins
    while (cents > 0)
    {
        if (cents >= 25)
        {
            quarters ++;
            cents -= 25;
        }
        else if (cents >= 10)
        {
            dimes ++;
            cents -= 10;
        }
        else if (cents >= 5)
        {
            nickels ++;
            cents -= 5;
        }
        else if (cents >= 1)
        {
            pennies ++;
            cents -= 1;
        }
    }
    int sum = pennies + nickels + dimes + quarters;
    //std::cout << pennies << ""\n" << nickels << "\n" << dimes << "\n" << quarters << "\n";
    //prints the sum of all the coins
    std::cout << sum << "\n";
}