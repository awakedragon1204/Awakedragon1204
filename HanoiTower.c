#include<stdio.h>
// in progress ...
int move(int n); 

int main() {
    int x;
    printf("input the height of Hanoi Tower: ");
    scanf("%d",&x);
    move(x);
}
int move(int n) {
    if (n>=2) {
    printf("put the %d disk from 'A' to 'B'",n-move(n-1));
    printf("put the %d disk from 'A' to 'C'",move(n));
    }
    if (n>=2) return move(n-1);
    if (n==1) return 1;
}

