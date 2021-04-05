/*
Bui Dang Tuan
U2020602L
*/
#include<stdio.h>
#include<math.h>
#define PI 3.14159
double bellcurve(double x, double mean, double std);
double trapzarea(double b1, double b2, double h);
int main() {
    double mean,std,min,max,intergral,deltax,x,b1,b2;
    int num,i;
    printf("This program approximates the definite integral of a bell curve using the trapezoidal rule. \n");
    printf("Mean and standard deviation: ");
    scanf("%lf%lf",&mean,&std);
    printf("Two limit of the definite integral: ");
    scanf("%lf%lf",&min,&max);
    printf("number of partitions: ");
    scanf("%d",&num);
    x=min;
    deltax=(max-min)/num;
    for(i=0;i<=num;i++) {
        b1=bellcurve(x+i,mean,std);
        b2=bellcurve(x+i+1,mean,std);
        intergral=intergral+ trapzarea(b1,b2,deltax);
    }
    printf("the definite integral is %lf",intergral);
return 0;
}
double trapzarea(double b1, double b2, double h) {
    double area;
    area=(b1+b2)*h/2;
    return area;
}
double bellcurve(double x, double mean, double std) {
    double funx;
    funx=(1/(std*sqrt(2*(PI))))*exp(-(pow((x-mean),2.0)/std)/2);
    return funx;
}

