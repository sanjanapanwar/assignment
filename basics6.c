 //Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.
 #include<stdio.h>
 int main()
 {
 int num,hours,min;
 printf("enter a number here:");
 scanf("%d",&num);
 hours=num/3600;
 min=num/60;
 printf("hours=%d\n",hours);
 printf("minutes=%d",min);
 }
