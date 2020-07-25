//Write a C program that accepts some integers from the user and find the highest value and the input position.
#include<stdio.h>
int main()
{
int a,b,c,d,e;
printf("enter the five values here:");
scanf("%d\n%d\n%d\n%d\n%d",&a,&b,&c,&d,&e);
int i,max=0,max_pos,a1[5]={a,b,c,d,e};
for(i=0;i<5;i++)
{

if(a1[i]>max)
{
max=a1[i];
max_pos=i+1;
}
}
printf("the highest value is %d\n",max);
printf("the highest value is present at position %d",max_pos);

}
