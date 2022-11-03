#include<stdio.h>
int main()
{
    float x=10.250;
    double y=125.387648;
    double z=15e+6;
    printf("%#.5g %g %g",x,y,z); //'#' is used for printing trailing zeros
    return 0;
}