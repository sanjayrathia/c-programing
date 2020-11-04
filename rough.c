/* pointers in c 
a pointer is a variable which stores  adderess of of another variable 
     suppose i is a variable and it has an address 8994 and we store this address in 
     j which has another address thus we can say tha j points to i (j->i)
     7:14
     */
#include<stdio.h>

int main()
{
    int i=4;
    printf("%u is the memory address of %d",&i,&i);
    return 0;
} 