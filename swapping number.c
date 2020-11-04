#include<stdio.h>
#include<conio.h>

int main()
{
    // to swap number
    int a,b,temp;
    printf("enter the value of a :\n");
    scanf("%d",&a);
    printf("enter the value of b :\n");
    scanf("%d",&b);
    printf("a and b before swapping is %d & %d",a,b);


    temp=a;
    a=b;
    b=temp;

    
    printf("after swapping a and b is %d and %d",a,b);
    
    return 0;
}