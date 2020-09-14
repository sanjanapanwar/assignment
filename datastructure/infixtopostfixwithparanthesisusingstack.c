//program to convert an infix exp. to postfix exp. using stack
#include<stdio.h>
#include<stdlib.h>

char stack1[20];
int top1=-1;
char stack2[20];
int top2=-1;

void push1(char x)
{
int size;
size=sizeof(stack1);
if(top1==size-1)
{
printf("stack overflow\n");
return;
}
top1=top1+1;
stack1[top1]=x;
}

void push2(char x)
{
int size;
size=sizeof(stack2);
if(top2==size-1)
{
printf("stack overflow\n");
return;
}
top2=top2+1;
stack2[top2]=x;
}

void pop()
{
if(top1==-1)
{
printf("stack is empty");
return;
}
top1=top1-1;
return;
}

char Top()
{
return stack1[top1];
}

int precedence(char x)
{
if(x=='^')
{
return 3;
}
else if(x=='*' || x=='/')
{
return 2;
}
else if(x=='+' || x=='-')
{
return 1;
}
}

void infixtopostfix(char exp[],int n)
{
int i;
char ch,x;
for(i=0;i<n-1;i++)
{
ch=exp[i];
if(ch=='+' || ch=='*' || ch=='-' || ch=='/' || ch=='^' || ch=='(')
{
while(top1!=-1 && precedence(stack1[top1])>=precedence(ch) && stack1[top1]!='(')
{
x=Top();
push2(x);
pop();
}
push1(ch);
}
else if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
{
push2(ch);
}
else if(ch==')')
{
while(top1!=-1 && stack1[top1]!='(')
{
x=Top();
push2(x);
pop();
}
pop();
}
}
while(top1!=-1)
{
x=Top();
push2(x);
pop();
}
}

int main()
{
char infix[]={'(','(','A','+','B',')','*','C','-','D',')','*','E','\0'};
int i,n;
n=sizeof(infix);
infixtopostfix(infix,n);
for(i=0;i<=top2;i++)
{
printf("%c",stack2[i]);
}
}


