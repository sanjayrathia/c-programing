#include<stdio.h>
// sum of 1st n natural number

int main()
{
    int i=0,n,sum=0;
    printf("enetr the the num you want the sum");
    scanf("%d",&n);
    do{
        
        sum+=i;
        i++; 


    }
    while(i<=n);
    printf("the sum of 1st %d natural nunber is %d",n,sum);



    
   

    return 0;
}