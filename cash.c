
#include <stdio.h>
#include <math.h>

int main(void)
{
    //Variables for coins
    int quarters = 0, dimes = 0, nickels = 0, pennies = 0;
    float dollars = 0;
    //Get user input
    do
    {
        printf("Change owed: ");
        scanf("%f", &dollars);
    }
    while (dollars < 0);
    //Convert to cents
    int cents = round(dollars * 100);