//Write a C program that reads three floating values and check if it is possible to make a triangle with them. Also calculate the perimeter of the triangle if the said values are valid
#include<stdio.h>
int main()
{
float a,b,c,perimeter;
printf("enter the value of a,b,c:");
scanf("%f\n%f\n%f",&a,&b,&c);
if(a+b==c || b+c==a ||c+a==b)
{
printf("yes,the triangle is valid\n");
perimeter=a+b+c;
printf("primeter of triangle is %f",perimeter);
}
else
{
printf("the triangle doesn't exists");
}
}
