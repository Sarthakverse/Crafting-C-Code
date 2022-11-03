#include<stdio.h>
int main()
{
    int x;
    printf("enter x: ");
    scanf("%d",&x);
    int y;
    printf("enter y: ");
    scanf("%d",&y);
    int z;
    z=x;
    x=y;
    y=z;
    printf("value of x after swapping is = %d \n",x);
    printf("value of y after swapping is = %d \n",y);
    return 0;

}