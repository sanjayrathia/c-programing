#include <stdio.h>

int main() {
    // to check whether the year is leap year or not
    int year;
    
    printf("enter the year you wato check ");
    scanf("%d",&year);
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                printf("given year is leap year");
            }
            
        }
        else
        {
            printf("this is leap year");
        }
        
    }
	return 0;
}