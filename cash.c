//header file
#include <cs50.h>
#include <stdio.h>
#include <math.h>

//main function
int main(void)
{
    //let user input float value, while the float number is < 0.00
    float dollar;
    do
    {
        dollar = get_float("Change dollar: ");
    }
    while (dollar < 0.00);
    // Convert dollars to cents
    int cents = round(dollar * 100);
    //set the counter to 0
    int counter = 0;
    // while cents is greater than 0, decreasing them by the biggest coin possible
    while (cents > 0)
    {
        if (cents >= 25)
        {
            cents -= 25;
            counter++;
        }
        else if (cents >= 10)
        {
            cents -= 10;
            counter++;
        }
        else if (cents >= 5)
        {
            cents -= 5;
            counter++;
        }
        else
        {
            cents -= 1;
            counter++;
        }
    }
    //print the count of the money used
    printf("%d\n", counter);
}
