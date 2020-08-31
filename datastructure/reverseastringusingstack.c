//programto reverse a string using stack
#include<stdio.h>
#include<stdlib.h>
char S[6]={'H','E','L','L','O','\0'};
char A[6];
int top=-1;
//function to check whether stack is empty or not?
void Isempty()
{
if(top==-1)
{
printf("Stack is empty\n");
return;
}
else
{
printf("Stack is full\n");
return;
}
}
//function to insert an element at the top of the stack
void push(int x)
{
if(top==sizeof(A)-1)
{
printf("stack is full");
return;
}
top=top+1;
A[top]=x;
}
//function to delete an element from the top of stack
void pop()
{
if(top==-1)
{
printf("stack is empty,nothing to pop here!");
return;
}
else
{
top=top-1;
}
}

//function to reverse the desired string
void reverse()
{
int i;
for(i=0;i<=sizeof(S)-1;i++)
{
push(S[i]);
}
}

//this function will return the top of the stack
char Top()
{
return A[top];
}

//function function to print the string in reverse order
void reverseprint()
{
int i;
char s;
for(i=0;i<=sizeof(A)-1;i++)
{
s=  Top();
printf("%c",s);
pop();
}
return;
}

//main function
int main()
{
reverse();
printf("The reverse string is:");
reverseprint();
}
