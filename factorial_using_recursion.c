#include<stdio.h>

/*fuction se fuction ko call krne ko recursion kehte hai ,
 1 hi function ko baar baar krne ko recursion kehte hai
       x*factorial(x-1))
       5*factoria(4)
       5*4*factorial(3)
       5*4*3*factorial(2)..........
 */
int factorial(int x);// prototype function



int main()
{
    int a;  //main function 
    printf("enetr the value of a \n");
    scanf("% d",&a);
    printf("the factirial of %d is %d",a,factorial(a));
    return 0;
   
}
 int factorial(int x) //define function
{
    printf("calling factorial %d\n",x);
    if(x==0 ||x==1)
    {
        return 1;
    }
    else
    {
        return x*factorial(x-1);
    }
}