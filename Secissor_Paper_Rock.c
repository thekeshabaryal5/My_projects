/*
                              Snake , Water , Gun

program to create a game*/

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>
int check(char, char);
int main()
{
    system("color 75");
    printf("\t*******************b12F*******************\n");
    printf("\n\t\tWelcome to secissor paper rock game: \n\n");
    int ran, man;
    char comp, you;
    int gamechoice = 1;
    srand(time(NULL));
    printf("\t\tchoose S for secissor \n\t\tP for paper\n\t\tR for Rock.\n\t\tLet's start:\n");
    while (gamechoice)
    {
        ran = rand() % 3 + 1;
        switch (ran)
        {
        case 1:
            comp = 'S';
            break;

        case 2:
            comp = 'P';
            break;

        default:
            comp = 'R';
        }
        printf("\t\tSescisor Paper  Rock ? ");
        fflush(stdin);
        scanf("%c", &you);
        you = toupper(you);
        man = check(comp, you);
        if (man == 1)
        {
            printf("\t\tCongratulations !! YOU WON\n Your choice=%c\nComputer choice=%c", you, comp);
        }
        else if (man == -1)
        {
            printf("\t\tSorry YOU LOOSED.\nYour choice=%c\nComputer choice=%c", you, comp);
        }
        else
            printf("\t\tOh the GAME IS DRAW\nYour choice=%c\nComputer choice=%c", you, comp);
        printf("\n\n\t\tWanna play again?(enter your lucky number):\nTo exit game enter 0(zero)\n\n");
        scanf("%d", &gamechoice);
    }
    return 0;
}
int check(char a, char b)
{
    if ((a == 'S' && b == 'P') || (a == 'P' && b == 'R') || (a == 'R' && b == 'S'))
        return -1;
    else if ((a == 'P' && b == 'S') || (a == 'R' && b == 'P') || (a == 'S' && b == 'R'))
        return 1;
    else
        return 0;
}