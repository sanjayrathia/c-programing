#include<stdio.h>
int add(n);

int main()
{
    int k,n;
    printf("enter the term you want \n");
    scanf("%d",&n);
    k =add(n);
    printf("%d",k);

    return 0;
}
int add(n)
{
    if(n==1)
    {
        return n;
    }
    else
    {
        int s;
        s=n+add(n-1);
        return s;
    }
    
}
