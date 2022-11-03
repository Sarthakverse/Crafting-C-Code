#include<stdio.h>
int main()
{   // LCM =lowest common multiple
    int a,b;
    printf("enter a and b:");
    scanf("%d %d",&a,&b);
    int start;
    if(a>=b)
    {
        start=a;
    }
    else
    {
        start=b;
    }
    int end=a*b;
    int ans=start;
    for(int i=start;i<=end;i++)
    {
        if(i%a==0&&i%b==0)
        {
            ans = i;
            break;
        }
    }
    printf("%d",ans);
    return 0;
}