#include<stdio.h>
int main()
{
    int n,i;
    printf("enter n:");
    scanf("%d",&n);
    printf("enter i:");
    scanf("%d",&i);
    for(i;n--;)
    {
        if(n%i==0)
        {
            continue; 
        }
        printf("%d, ",n);
        
    }
    return 0;
}