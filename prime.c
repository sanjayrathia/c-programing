#include<stdio.h>

int main()
{
    int n,i,prime=0;
    printf("enter the number you want");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            
            prime=1;
            break;
        }
      
    }
    if(prime==1)
    {
        printf("this is not prime");
    }
    else{
        printf("this is prime");
    }
    



         
          
  
  
  return 0;
    
    
}
     
