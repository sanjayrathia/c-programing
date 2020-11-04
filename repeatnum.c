#include<stdio.h>

int main()
{
    int i=1,n,r;
    printf("enetr the num you want to repeat");
    scanf("%d",&n);
    printf("how many time you want to repeat");
    scanf("%d",&r);
    while(i<=r)
    {
        printf("%d\n",n);
        i++;
    }
    
    
    return 0;
}