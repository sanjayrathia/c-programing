#include<stdio.h>

int main()
{
    // program to print multiplication table of 10 in reverse order maine koi bhi kr diya hai
    // agar 10 ka bi krna hai to n=10 pehle le lena
    int i,n,x;
    printf("enetr the number\n");
    scanf("%d",&n);


    for(i=10;i>0;i--)
    {
        x=n*i;
        printf("%d*%d=%d\n",n,i,x);
    }
    return 0;
}