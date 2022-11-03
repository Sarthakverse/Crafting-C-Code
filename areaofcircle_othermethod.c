#include<stdio.h>
#define PI 3.14; //IT may show you errors
int main()
{
    int x;
    printf("enter value of x:");
    scanf("%d",&x);
    double y = PI*x*x;// error can be seen here
    printf("Area is %.2lf*%d*%d=%.2lf",PI,x,x,y); //as you see here error is also there
    return 0;  
}