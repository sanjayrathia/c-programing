#include<stdio.h>

int main()
{
    int a;
    printf("enter your number ");
    scanf("%d",&a);
    
    switch(a/10)
    {
        case 9:
        printf("your grade is A\n");
        break;
         case 8:
        printf("your grade is B\n");
        break;
         case 7:
        printf("your grade is C\n");
        break;
         case 6:
        printf("your grade is D\n");
        break;
         case 5:
        printf("your grade is E\n");
        break;
        default:
        printf("invalid input");









    }









    
    return 0;
}