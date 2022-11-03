#include<stdio.h>
int main()
{
    int x;
    printf("write number:");
    scanf("%d",&x);
    int result=x%10;
    if(x>0)
    {
       printf("last digit is %d",result);
    }
    else
    {
        printf("last digit is %d",-(result));
    }
    return 0;
}