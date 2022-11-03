#include<stdio.h>
int main()
{
    int x=10,y;
    y=x;
    printf("%d\n",y);
    x+=10;            //x+=10---->x=x+10 hota hai
    printf("%d\n",x);
    x-=10;           //x-=10----->x=x-10 hota hai
    printf("%d\n",x);
    x*=2;            //x*=2------>x=x*2 hota hai
    printf("%d\n",x);
    return 0;
}