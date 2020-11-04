/*to check the value of 
     printf("%d %d %d",a,++a,a++ ) iska answer normally dekhe to 3,4,4 ana chahiye pr 
     iska answer 5 5 3 aa rha lyuji argument k hisab se right to leaft leta hai 
     to fir pehle a++ krega =3 fir 4 hoke ++a mian jayega =5 fir 5 a main jayega 
     ye gcc k hisab se hai har compiler k hisab se alag alag leta hai arguments ko 
     kisi main left to right to kisi main right to left*/
#include<stdio.h>

int main()
{
    int a=3;
    printf("%d %d %d",a,++a,a++ );
    return 0;
}