 //Write a C program that read 5 numbers and counts the number of positive numbers and print the average of all positive values.
#include<stdio.h>
int main()
{
int a,b,c,d,e;
printf("enter any five numbers:");
scanf("%d\n%d\n%d\n%d\%d",&a,&b,&c,&d,&e);
int i,n=0,p=0,sum=0,avg,a1[5]={a,b,c,d,e};
for(i=0;i<5;i++)
{
if(a1[i]<0)
{
n=n+1;

}
else
{
p=p+1;
sum=sum+a1[i];


}
}
avg=sum/p;
printf("no of negative nos is %d\n",n);
printf("no of positive nos is %d\n",p);
printf("average of positive nos is %d",avg);

}

