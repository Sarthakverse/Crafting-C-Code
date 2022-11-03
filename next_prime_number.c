#include<stdio.h>
int nextprime(int n){
  while(1){
    int i;
    for(i=2;i<n;i++){
      if(n%i==0)
        break;
    }
     if(i==n)
        return n;
        n++;
      }
}
int main()
{
    int n;
    printf("write n:");
    scanf("%d",&n);
    printf("%d",nextprime(n+1));
    return 0;
}