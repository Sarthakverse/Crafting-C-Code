# include<stdio.h>
static int x;//UNINITIALLIZED STAIC GLOBAL VARIABLE
int main()
{
    static int x;//UNITIALLIZED STATIC LOCAL VARIABLE
    printf("%d",x);
    return 0;
}
