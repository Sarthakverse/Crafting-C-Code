#include<stdio.h>
int main()
{
    int x;
    printf("enter 1st number: \n");
    scanf("%d",&x);
    int y;
    printf("enter 2nd number: \n");
    scanf("%d",&y);
    int z;
    printf("enter 3rd number: \n");
    scanf("%d",&z);
    if(x>=y&&x>=z)
    printf("1st is largest");
    else if(y>=x&&y>=z)
    printf("2nd is largest");
    else
    printf("3rd is largest");
    return 0;
}