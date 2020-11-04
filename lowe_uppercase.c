#include<stdio.h>

int main()
{
    // to check the character is lower case
    // 122 se 97
    char ch;
    printf("enetr the character");
    scanf("%c",&ch);
    if(ch>=97&&ch<=122)
    {
        printf("the character is lower case");
    }
    else
    {
        printf("the character is upper case ");
    }


    return 0;
}