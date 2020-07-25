 //Write a C program that prints all even numbers between 1 and 50 (inclusive).
 #include<stdio.h>
 int main()
 {
 int a[50],i,m=0;
 for(i=0;i<50;i++)
 {
 a[i]=m+1;
 if(a[i]%2==0)
 {
 printf("even num between 1 and 50 is %d\n",a[i]);
 }
 m=m+1;
 }

 }
