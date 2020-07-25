//Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches. and width of 5 inches.
//Write a C program to convert specified days into years, weeks and days.
#include<stdio.h>
int main()
{
int days,years,months,weeks;
printf("enter the no. of days:");
scanf("%d",&days);
years=days/365;
months=years*12;
weeks=months*4;
printf("years=%d",years);
printf("months=%d",months);
printf("weeks=%d",weeks);
return 0;

}
