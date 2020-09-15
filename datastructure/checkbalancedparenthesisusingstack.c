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


int check_balanced_paranthesis(char exp[],int n)
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
if(stack1[top1]=='(')
{
pop();
}
else
{
return 0;
}
}
else if(ch=='}')
{
if(stack1[top1]=='{')
{
pop();
}
else
{
return 0;
}
}
else if(ch==']')
{
if(stack1[top1]=='[')
{
pop();
}
else
{
return 0;
}
}
}
if(top1==-1)
{
return 1;
}
else{
return 0;
}
}

int main()
{
int p;
char infix[]={'{','(','(','[',']',')','[',']',')','[',']','}','\0'};
int i,n;
n=sizeof(infix);
p=check_balanced_paranthesis(infix,n);
if(p==1)
{
printf("Blanced paranthesis");
}
else
{
printf("Not Balanced paranthesis");
}

}
