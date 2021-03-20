#include<stdio.h>
int fib(int n) {
    if ( n>=3) {return fib(n-1)+fib(n-2);}
    if ( n==1 || n==2) {return 1;}
}
int main() {
    int x;
    scanf("%d",&x);
    printf("%d",fib(x));
}