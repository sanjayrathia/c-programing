/* write a function to convert celsius to fahrenheight */
#include<stdio.h>
float conversion(float cel );

int main()
{
    float cel;
    printf("enetr the tempreature in celsious");
    scanf("%f",&cel);
    printf("the tempreature in fahreheight is %f",conversion(cel));


    return 0;
}
float conversion(float cel )
{
    float farh;
    farh=(cel*9/5)+32;
    return farh;
}