#include<stdio.h>
int nextPrime()
{
    int n;
    printf("n:");
    scanf("%d",&n);
    for(int i=n+1;;i++)
    {
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            break;
            else
            printf("%d",i);
        }
    }
    return 0;
}