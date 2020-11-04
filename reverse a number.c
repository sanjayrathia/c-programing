#include<stdio.h>

int main()
{
    int n,rev;
    printf("enter the num to reverse it ");
    scanf("%d",&n);
    rev=0;
    
    while(n>0)
    {
        rev=(rev*10)+(n%10);
        n=n/10;

    }
    
    printf("the reverse is %d",rev);

    return 0;
}