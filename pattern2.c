#include<stdio.h>
/*
   ****** to make this like triangle
    *****
     ****
      ***
       **
        *



*/



int main()
{
    int i,j ,row;
    printf("enter the numbere of rows you want :\n ");;
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    
          {
                 for(j =1;j<=row;j ++)
                    {
                        if(i<=j)
                        {
                       printf("*");
                        }
                        else
                        {
                            printf(" ");
                        }
                    }
                    printf("\n");
          }     
    return 0;
}