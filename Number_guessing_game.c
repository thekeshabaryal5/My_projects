/*This is going to be fun?
We will write a porgram that generates a random number and asks the player to guess it.
If the player's guess is higher than the actual number, the porgram displays" Lower number please".
Similarly, if the user's guess is too low the program displays "Higher number please".
When the user guesses the correct number, the pogram displays the number of guesses the player
used to arrive at the number*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    system("color 75");
    int a, i, n = 1, ran, choice = 1;
    printf("\n\t\tWelcome to number guessing game:\n\n");
    while (choice)
    {
        printf("\t\tEnter the maximum number you want to guess ");
        scanf("%d", &ran);
        srand(time(NULL));
        i = (rand() % ran + 1);
        printf("\n\t\tGuess the number from 1 to %d: ", ran);
        scanf("%d", &a);
        if (i != a)
        {
            while (i != a)
            {
                if (a > i)
                {
                    printf("\t\tLower number please : ");
                    scanf("%d", &a);
                    n++;
                }
                else
                {
                    printf("\t\tHigher number please : ");
                    scanf("%d", &a);
                    n++;
                }
            }
        }
        printf("\t\tCongratulations! you guessed it correct in %d guesses", n);
        
        printf("\n\n\t\tWanna play again? enter any number except 0: \n\n");
        scanf("%d",&choice);
    }
    fflush(stdin);
    getchar();
    return 0;
}