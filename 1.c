#include <stdio.h>
#include <stdlib.h>  // For rand() and srand()
#include <time.h>    // For time() to seed the random number generator

int main()
{
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    // Loop until the user guesses the correct number
    do {
        printf("Guess the number (1 to 100): ");
        scanf("%d", &guessed);

        no_of_guesses++;  // Increment the number of guesses

        if (guessed > randomNumber) {
            printf("Lower number please!\n");
        } else if (guessed < randomNumber) {
            printf("Higher number please!\n");
        }
    } while (guessed != randomNumber);

    // Output the number of guesses it took
    printf("Congratulations! You guessed the number %d in %d guesses.\n", randomNumber, no_of_guesses);

    return 0;
}
