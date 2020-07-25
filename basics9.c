//Write a C program that read 5 numbers and sum of all odd values between them.
int main()
{
int num1,num2,num3,num4,num5;
printf("enter the first num:");
scanf("%d",&num1);
printf("enter the second num:");
scanf("%d",&num2);
printf("enter the third num:");
scanf("%d",&num3);
printf("enter the fourth num:");
scanf("%d",&num4);
printf("enter the fifth num:");
scanf("%d",&num5);
int a[5]={num1,num2,num3,num4,num5};
int i,sum=0;
for(i=0;i<5;i++)
{
if(a[i]%2!=0)
{
sum=sum+a[i];
}

}
printf("sum of all odd values=%d",sum);

}
