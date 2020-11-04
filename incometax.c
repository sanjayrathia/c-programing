#include<stdio.h>

int main()
{
    float sal,ysal,y;
    printf("enter your  monthly salary");
    scanf("%f",&sal);
    ysal= sal*12;
    printf("your yearly salary is %f",ysal);
    y=ysal/1000;

    if(y>2.5||y<5 )
    {
        printf("you have to give 5 percent tax of your ssalary to the goverment");
    }
    
    return 0;
}