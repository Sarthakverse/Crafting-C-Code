#include<stdio.h>
int main()
{
    int n;
    printf("write value of n:");
    scanf("%d",&n);
    for(int row=1;row<=n;row++)
    {
        int col=1;
        while(col<=(n-row))
        {
            printf(" ");
            col++;
        }
        while(col<=n)
        {
            printf("*");
            col++;
        }
        printf("\n");
     } 
     return 0;
}