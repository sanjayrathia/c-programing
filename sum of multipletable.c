#include<stdio.h>
// que 7 5:08 tk hua hai
int main()
{
    int i,sum=0,n=8,x;
    
    for(i=1;i<=10;i++) 
    {
        x=n*i;
        printf("%dx%d=%d\n",n,i,x);
        sum+=8*i;
        
       
    }
    
    printf("%d",sum);
    return 0;
}