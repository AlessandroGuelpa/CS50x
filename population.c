#include <cs50.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    // TODO: Prompt for start size
    int population_size_start;
    do
    {
        population_size_start = get_int("Start population size: ");
        if (population_size_start < 9)
        {
            printf("try to insert a number greater or equal to 9\n");
            sleep(2);
        }
    }
    while (population_size_start < 9);
    // TODO: Prompt for end size
    int population_size_end;
    do
    {
        population_size_end = get_int("End population size: ");
        if (population_size_end < population_size_start)
        {
            printf("try to insert a number greater or equal to Population Start Size\n");
            sleep(2);
        }
    }
    while (population_size_end < population_size_start);


    // TODO: Calculate number of years until we reach threshold
    int year = 0;
    int increment = 0;
    while (population_size_start < population_size_end)
    {
        population_size_start = population_size_start + (population_size_start / 3) - (population_size_start / 4);
        year++;
    }
    // TODO: Print number of years
    printf("Years: %i", year);
}
