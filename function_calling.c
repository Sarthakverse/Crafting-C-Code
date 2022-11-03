#include<stdio.h>
void fun()
{
    printf("dude\n");
}
int main()
{
    printf("function call krne se pehle\n");
    fun();
    printf("function call krne ke baad\n");
    return 0;    
}