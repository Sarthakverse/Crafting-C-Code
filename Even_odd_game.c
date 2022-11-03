#include<stdio.h>
int main()
{
    int n;
    printf("enter number of cups:");
    scanf("%d",&n);
    if(n%2==0&n!=0)
    {
        printf("opponent wins");
    }
    else if(n%2!=0)
    {
        printf("player wins");
    }
    else
    {
        printf("rules not followed");
    }
    return 0;
}