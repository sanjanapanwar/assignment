//Write a C program that accepts three integers and find the maximum of three
#include<stdio.h>
int main()
{
int x,y,z;
printf("enter the value of x:");
scanf("%d",&x);
printf("enter the value of y:");
scanf("%d",&y);
printf("enter the value of z:");
scanf("%d",&z);
if(x>y && x>z)
{
printf("x is the greatest no=%d",x);
}
else if(y>x &&y>z)
{
printf("y is the greatest no=%d",y);
}
else
{
printf("z is the greatest no=%d",z);
}
}
