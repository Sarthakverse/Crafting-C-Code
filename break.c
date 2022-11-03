#include<stdio.h>
int main()
{
    int n;
    printf("enter number: \n");
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("smallest divisor is %d",i);
            break;
        }    
    }
    return 0;
}
