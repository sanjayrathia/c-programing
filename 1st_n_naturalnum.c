#include<stdio.h>

int main()
{
    //  to print first n NATURAL number 
    int n;
    printf("enetr the number");
    scanf("%d",&n);
    do{
        printf("%d\n",n);
        n--;

    }while(n>0);
    return 0;
}