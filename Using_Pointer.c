#include<stdio.h>
int main()
{
    char a='g';
    char b[]="gfg";
    printf("%c %s %p",a,b,&b);//%p is pointer here
    return 0;
}