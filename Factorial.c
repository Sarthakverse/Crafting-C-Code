#include<stdio.h>
int main()
{
    int n;
    printf("write value of n:");
    scanf("%d",&n);
    int ans=1;
    while(n>0)
    {
        ans=ans*n;
        n--;
    }
    printf("%d",ans);
    return 0;
}