/* write a progra using function to find average of three number*/
#include<stdio.h>
float average(int a,int b,int c);


int main()
{
    int a,b,c;
    printf("enter the number a\n");
    scanf("%d",&a);
    printf("enter the number b\n");
    scanf("%d",&b);
    printf("enter the number c\n");
    scanf("%d",&c);
    printf("the average is %f ",average(a,b,c));

    return 0;
}   
float average(int a,int b,int c)
{
    float avg;
    avg=(float)(a+b+c)/3;
    return avg;



}