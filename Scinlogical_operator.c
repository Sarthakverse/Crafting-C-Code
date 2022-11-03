#include<stdbool.h>
#include<stdio.h>
int main()
{
    int x=20;
    bool res=(x>2)||(x++);
    printf("%d\n",res);
    printf("%d",x);
    return 0;
}