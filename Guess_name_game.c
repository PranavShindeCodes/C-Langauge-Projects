#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 0 and 100
    int randomNumber = rand() % 100;
    int attempts = 0;
    int input;
    do
    {
        printf("Enter Number: \n");
        scanf("%d", &input);
        attempts++;
        if (input == randomNumber)
        {
            printf("Congratulations! Num is %d , And you completed in %d attempts \n", randomNumber, attempts);
        }

        else if (input < randomNumber)
        {
            printf("Enter higher Number \n");
        }
        else
        {
            printf("Enter lower number pls \n");
        }
    } while (input != randomNumber);
}
