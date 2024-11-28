#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;
    int minimumCoins = 0;
    int changeOwed;
    do
    {
        changeOwed = get_int("Change owed : ");
    }
    while (changeOwed < 0);

    while (changeOwed > 0)
    {
        if (changeOwed >= 25)
        {
            quarters += changeOwed / 25;
            changeOwed -= 25 * quarters;
        }
        else if (changeOwed >= 10)
        {
            dimes += changeOwed / 10;
            changeOwed -= 10 * dimes;
        }
        else if (changeOwed >= 5)
        {
            nickels += changeOwed / 5;
            changeOwed -= 5 * nickels;
        }
        else if (changeOwed > 0)
        {
            pennies += changeOwed;
            changeOwed -= changeOwed;
        }
    }

    minimumCoins = quarters + dimes + nickels + pennies;

    printf("%i\n", minimumCoins);
}
