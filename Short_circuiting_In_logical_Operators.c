#include<stdbool.h>
#include<stdio.h>
int main()
{
    int x=5;
    bool res=(x>10&&x++);
    printf("%d\n",res);//0
    printf("%d\n",x);//5
    return 0;

}