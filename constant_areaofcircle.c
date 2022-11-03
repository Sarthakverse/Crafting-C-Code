#include<stdio.h>
const double PI=3.14;
int main()
{
    int x;
    printf("enter value of x:");
    scanf("%d",&x);
    double y=PI*x*x;
    printf("area is %.2lf*%d*%d=%.2lf",PI,x,x,y);
    return 0;
}