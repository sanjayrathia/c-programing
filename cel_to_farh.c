#include<stdio.h>

int main()
{
    float celsios,fah;
    printf("enter the temp in celsios \n");
    scanf("%f",&celsios);
    fah=(celsios*9/5)+32;
    printf("the temp in fahrenheight is %f ",fah);

    return 0;
}