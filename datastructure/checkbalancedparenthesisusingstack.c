//program to check whether the parenthesis are balanced or not
#include<stdio.h>
#include<stdlib.h>

char stack1[20];
int top1=-1;

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


void check_balanced_paranthesis(char exp[],int n)
{
int i;
char ch,x;
for(i=0;i<n-1;i++)
{
ch=exp[i];
if(ch=='(' || ch=='{' || ch=='[')
{
push1(ch);
}
else if(ch==')')
{
if(stack1[top1]='(')
{
pop();
}
}
else if(ch=='}')
{
if(stack1[top1]=='{')
{
pop();
}
}
else if(ch==']')
{
if(stack1[top1]=='[')
{
pop();
}
}
}
if(top1==-1)
{
printf("Balanced paranthesis\n");
}
else{
printf("Not Balanced paranthesis\n");
}
}

int main()
{
char infix[]={'{','(','A','+','B','+','(','C','+','D',')','}','\0'};
int i,n;
n=sizeof(infix);
check_balanced_paranthesis(infix,n);

}
