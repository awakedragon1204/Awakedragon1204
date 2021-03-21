/*
Bui Dang Tuan
U2020602L
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int throw_dice(int n) {  //n is the number of dices
    int value, i, total=0;
    srand(time(0));  
    for(i=0 ; i < n ; i++) {
    value = rand()%6+1 ;
    total = total + value;
    }
     return total;
}
void print_scoreboard(int player, int dealer) {
    int i;
    printf("==========================\n");
    printf("SCORE BOARD\n");
    printf("__________________________\n");
    printf("Player  "); 
    for(i=0 ; i<player ; i++) {
        printf("*");
    }
    printf("\n");
    printf("Dealer  ");
    for(i=0 ; i<dealer ; i++) {
        printf("#");
    }
    printf("\n");
}

int main() {
    int x=0,y=0,round=1,n;
    char another='Y';
    printf("Enter the number of six-sided dices to play (1-5) :");
    scanf("%d",&n);
    for (;n>5 || n<1;) {
        printf("Please input a integer(1-5) : ");
        scanf("%d",&n);
    }

    while (another=='Y') {
        int dealer, player, choice;
        dealer = throw_dice(n);
        sleep(1);
        player = throw_dice(n);
        printf(" ROUND %d \n",round);
        printf("Dealer is rolling the dice ... Dealer rolled %d \n",dealer);
        printf("Will your roll be: 1. HIGHER; 2. LOWER; 3.SAME?");
        scanf("%d",&choice);
        printf("You are rolling the dice ... You rolled %d\n",player);
        if(choice==1){
            if(player>dealer) {
                printf("Win\n");
                x++;
            }
            else {
                printf("Lose\n");
                y++;
            }        
        }
        if(choice==2) {
            if(player<dealer) {
                printf("Win\n");
                x++;
            }
            else {
                printf("Lose\n");
                y++;
            }
        }
        if(choice==3) {
            if(player==dealer) {
                printf("Win\n");
                x++;
            }
            else {
                printf("Lose\n");
                y++;
            }    
        }
        
    print_scoreboard(x,y);
    printf("Play another round? (Y/N): ");
    fflush(stdin);
    scanf("%c",&another);
    round = round + 1;
    if (another =='N') {
        printf("Good bye!");
    }
    }

return 0;
}