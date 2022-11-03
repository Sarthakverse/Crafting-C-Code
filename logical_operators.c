#include<stdbool.h>
#include<stdio.h>
int main()
{
    int x=10,y=20;
    bool result=(x>0&x>y);
    printf("%d\n",result);
    result=(x>0||x>y);
    printf("%d\n",result);
    result=!result;
    printf("%d",result);
    return 0;
}