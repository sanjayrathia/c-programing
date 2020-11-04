/* write a function to calculate force of attraction on a body of mass m exerted by earth
g=9.8 m/s*/
#include<stdio.h>
float attraction(float mass);

int main()
{
    float mass;
    printf("enter the mass of the object in kg");
    scanf("%f",&mass);
    printf("the force of attraction in newton is %.2f",attraction(mass));
    

    return 0;
}
float attraction(float mass)
{
    float force;
    force = mass*9.8;
    return force;
}