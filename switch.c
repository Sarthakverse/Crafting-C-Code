#include<stdio.h>
int main()
{
    int x=0,y=0;
    printf("enter a choice:\n");
    char c;
    scanf("%c",&c);
    switch(c)
    {
        case 'a': x--;
                break;
        case 'd': x++;
                break;
        case 'w': y++;
                break;
        case 's': y--;
                break;
        default:printf("invalid move");
    }
    printf("%d %d",x,y);
        return 0;
    }
