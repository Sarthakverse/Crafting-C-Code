#include<stdio.h>
int main()
{
    int x=10;
    int y=x++;//urinnary operator hai
    int z=++x;
    int a=--x;
    int b=x--;
    printf("%d %d %d %d %d",x,y,z,a,b);
    return 0;
}