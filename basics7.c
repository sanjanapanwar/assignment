//Write a C program to convert a given integer (in days) to years, months and days, assumes that all months have 30 days and all years have 365 days.
#include<stdio.h>
int main()
{
int num,years,months,days,t;
printf("enter the number of days:");
scanf("%d",&num);
years=num/365;
t=num%365;
months=t/30;
days=t%30;
printf("years=%d\n",years);
printf("months=%d\n",months);
printf("days=%d",days);

}
