#include<stdio.h>
int getmax(x,y)
{
    if(x>y)
    return x;
    else
    return y;
}
int main()
{
    int x=10,y=20;
    printf("%d",getmax(x,y));
    return 0;
}
