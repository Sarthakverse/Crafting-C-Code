#include<stdio.h>
int main()
{   
    int a=20;
    int b=0x1A; //0x represents hexadecimal 10*16^0+1*16^1=26
               
    int c=016; //0 represents octal here6*8^0+1*8^1=14
              
    int d=0b11; //0b represents binary number 1*2^0+1*2^1=3
    printf("%d %d %d %d",a,b,c,d);
    return 0;
}