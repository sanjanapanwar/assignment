//Write a C program to check whether a given integer is positive even, negative even, positive odd or negative odd. Print even if the number is 0.
#include<stdio.h>
int main()
{
int num;
printf("enter a number:");
scanf("%d",&num);
if(num%2==0 && num>0)
{
printf("the number is positive even");

}
else if(num%2==0 && num<0)
{
printf("the number is negative even");
}
else if(num==0)
{
printf("number is even");
}
else if(num%2!=0 && num>0)
{
printf("number is positive odd");

}
else
{
printf("number is negative odd");
}

}
