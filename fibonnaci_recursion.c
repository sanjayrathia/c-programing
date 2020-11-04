
/*write a program using recursion to calculate nth
element of finonacci series  time 6:50*/
#include<stdio.h>
int fibonacci( int num);

int main()
{
    int num;
    printf("enter the term you want to find ");
    scanf("%d",num);
    printf("%d",fibonacci(num-1));
    return 0;
}
int fibonacci( int num)
{
    if(num<=1)
    return num;
    return fibonacci(num-1)+fibonacci(num-2);


    
    
    
}