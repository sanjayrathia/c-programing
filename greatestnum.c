#include<stdio.h>

int main()
{
    int a,b,c,d;
    printf("enter the number \n");
    scanf("%d",&a);
    printf("enter the number \n");
    scanf("%d",&b);
    printf("enter the number \n");
    scanf("%d",&c);
    
    if(a>b||a>c) 
    {
        printf("%d is the greatest",a);
    }
    else if(b>c||b>a)
    {
        printf("%d is the greatest",b);
    }
    else 
    {
        printf("%d is the greatest",c);
    }
    
   
    return 0;
}