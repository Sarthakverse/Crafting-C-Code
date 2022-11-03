#include<stdio.h>
int main()
{
    int n;
    int d;
    printf("write value of n:");
    scanf("%d",&n);
    printf("write value of d:");
    scanf("%d",&d);
    int divide_res=n%7;
    int sub_res=d-divide_res;
    if(sub_res>=0)
    {
        printf("%d",sub_res);
    }
    else
    {
        sub_res=sub_res+7;
        printf("%d",sub_res);
    }
    return 0;
}