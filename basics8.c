//Write a C program that accepts 4 integers p, q, r, s from the user where r and s are positive and p is even. If q is greater than r and s is greater than p and if the sum of r and s is greater than the sum of p and q print "Correct values", otherwise print "Wrong values".
#include<stdio.h>
int main()
{
int p,q,r,s;
printf("enter the value of p,q,r,s:");//p should be even and r>0,s>0
scanf("%d\n%d\n%d\n%d",&p,&q,&r,&s);
if(q>r && s>p && r+s>p+q)
{
printf("correct values");

}
else
{
printf("wrong values");
}
}
