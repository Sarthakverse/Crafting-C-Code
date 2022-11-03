#include<stdio.h>
int main()
{
    int n;
    printf("write value of n:");
    scanf("%d",&n);
    if(n==0||n==1)
    {
        printf("not prime");
    }
    for(int i=2;i<=n;i++)
    {
      if(i<n&n%i==0)
      {
        printf("not prime");
        break;
      }
      else
      {
        printf("prime");
        break;
      }
    }
    return 0;
}
    