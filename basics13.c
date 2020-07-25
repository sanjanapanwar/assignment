//Write a C program that read 5 numbers and sum of all odd values between them
#include<stdio.h>
int main()
{
int a,b,c,d,e;
printf("enter 5 values here:");
scanf("%d\n%d\n%d\n%d\n%d",&a,&b,&c,&d,&e);
int sum=0,i,a1[5]={a,b,c,d,e};
for(i=0;i<5;i++)
{
if(a1[i]%2!=0)
{
sum=sum+a1[i];
}
}
printf("sum of all odd values is %d",sum);

}
