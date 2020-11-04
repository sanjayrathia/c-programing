#include<stdio.h>
// printing multiple table of number given input by user
int main()
{
    int i,n,x;
    printf("enetr the number whose table you want\n");
    scanf("%d",&n);
    

    for(i=1;i<11;i++)
    {
        x=n*i;

        printf("%d\n",x);
    }
    return 0;
}