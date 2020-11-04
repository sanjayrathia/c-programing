#include<stdio.h>
int sum(int a ,int b);//prototype

int main()
    {
        int c;
        sum(4,5);//function call 
        c= sum(4,5);
    
    
        printf("the sum of a and b is %d",c);

        return 0;
    }
    int sum(int a ,int b) //function
        {
        int result;
        result=a+b;
        return result ;
        }
