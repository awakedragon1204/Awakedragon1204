#include<stdio.h>
#include<math.h>
#include<time.h>
int main()
{
    int human, bot,i,j,k;
    printf("Let play a game of ROCK PAPER SCISSORS\n\n");
    printf("Enter 1 for ROCK; 2 for PAPER; 3 for SCISSORS.\n");
    printf("What is your choice?\n");
    scanf("%d",&human);
    while (human<1 || human>3)
        {
            printf("That is not a valid option\n");
            printf("Please input a valid option a integer from 1 to 3 : ");
            scanf("%d",&human);
        }
    if (human==1) printf("You throw ROCK.\n\n");
    if (human==2) printf("You throw PAPER.\n\n");
    if (human==3) printf("You throw SCISSORS.\n\n");

    printf("JanKenBot is making a choice ... \n");
    srand((unsigned) time(NULL));
    bot = rand()%3;
    if (bot==0) printf("JankenBot throw ROCK.\n\n");
    if (bot==1) printf("JankenBot throw PAPER.\n\n");
    if (bot==2) printf("JankenBot throw SCISSORS.\n\n");
        if (human==1)
    {
    if (bot==0) printf("It's a draw.\n\n");
    if (bot==1) printf("Sorry, you lost the game.\n\n");
    if (bot==2) printf("You won the game!.\n\n");
    }
        if (human==2)
    {
    if (bot==0) printf("You won the game!.\n\n");
    if (bot==1) printf("It's a draw.\n\n");
    if (bot==2) printf("You lost the game.\n\n");
    }
        if (human==3)
    {
    if (bot==0) printf("You lost the game.\n\n");
    if (bot==1) printf("You won the game!.\n\n");
    if (bot==2) printf("It a draw.\n\n");
    }

    return 0;
}
