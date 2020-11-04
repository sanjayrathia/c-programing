#include<stdio.h>

int main()
{
    float p,r,t,si,a;
    
    printf("enter the principle");
    scanf("%f",&p);
    printf("\n%f",p);
    printf("enter the rate ");
    scanf("%f",&r);
    printf("f",r);
    printf("enter the time");
    scanf("%f",&t);
    printf("%f",t);
    
    a=p*r*t;
    si=a/100;

    printf("the simple interest of the given values is %f",si);
    return 0;
}