//Write a C program to find and print the square of each one of the even values from 1 to a specified value
#include<stdio.h>
int main()
{
int n,sq,i;
printf("enter the value of n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sq=i*i;
printf("square is %d\n",sq);
}
}
