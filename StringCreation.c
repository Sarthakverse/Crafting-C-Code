#include<stdio.h>
int main()
{
    char name[100];//string created
    printf("enter your name:");
    fgets(name,100,stdin);//fgets is used because i may use
                        //string with spaces 
    printf("Hi Sarthak %s\n",name);
    printf("love you darlling");
    return 0;
}