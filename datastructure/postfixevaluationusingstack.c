//evaluation of postfix expression using stack
#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>
//declaration of stack
int stack[20],top=-1;
//push function to insert an element into the stack
void push(int x)
{
if(top==sizeof(stack)-1)
{
printf("stack overflow\n");
return;
}
top=top+1;
stack[top]=x;
}
//pop function will return the top of the stack and also remove the top element of the stack
int pop()
{
int x;
if(top==-1)
{
printf("stack is empty\n");

}
x=stack[top];
top=top-1;
return x;
}
//solve function to solve the expression
int solve(char c,int A,int B)
{
int res;
if(c=='+')
{
res=B+A;
}
else if(c=='-')
{
res=B-A;
}
else if(c=='*')
{
res=B*A;
}
else if(c='/')
{
res=B/A;
}
return res;
}

//this will evaluete the complete expression and return the value after evaluation of expression
int postfixevaluation(char exp[],int n)
{
int i,value,A,B;
char c;
for(i=0;i<n-1;i++)
{
c=exp[i];
if(isdigit(c))
{
push(c - '0');
}
else if(c=='+'||c=='-'||c=='*'||c=='/')
{
A=pop();
B=pop();
value=solve(exp[i],A,B);
push(value);

}
}
return stack[top];
}
//main function
int main()
{
char postfix[]={'2','3','*','5','4','*','+','9','-','\0'};
int size;
size=sizeof(postfix);
printf("the result of the expression is:");
printf("%d",postfixevaluation(postfix,size));
return 0;

}
