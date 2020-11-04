#include<stdio.h>

int main()
{
    int n,i=0,factorial=1;
    printf("enter the number whose factorial you want to find");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        factorial*=i;
    }
    printf("the factorial of %d is %d",n,factorial);
    return 0;
}