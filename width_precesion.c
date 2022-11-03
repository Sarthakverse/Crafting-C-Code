#include<stdio.h>
int main()
{
    int x=124;
    printf("%d\n",x);
    printf("%5d\n",x);
    char y[]="gfg";
    printf("%5s\n",y);
    float z=1.2;
    printf("%5g",z);
    printf("%*s",6,x);//another way of giving width
    return 0;
}