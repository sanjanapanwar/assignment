 //Write a C program to calculate the distance between the two points.
#include<stdio.h>
int main()
{
int x1,y1,x2,y2,s;
float d;
printf("enter the value of x1:");
scanf("%d",&x1);
printf("enter the value of y1:");
scanf("%d",&y1);
printf("enter the value of x2:");
scanf("%d",&x2);
printf("enter the value of y2:");
scanf("%d",&y2);
s=(y2-y1)*(y2-y1)+(x2-x1)*(x2-x1);
d=sqrt(s);
printf("the distance b/w two point is %f",d);

}
