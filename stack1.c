//implementation of stack using array
#include<stdio.h>
#define MAX_SIZE 101
//global variables

int A[MAX_SIZE];
int top=-1;

//Insert an element in the stack
void push(int x)
{
if(top==MAX_SIZE-1)
{
printf("ERROR:stack overflow!\n");
return;
}

A[++top]=x;

}

//delete an element from the stack
void pop()
{
if(top==-1)
{
printf("ERROR:No element to pop\n");
return;
}
top--;

}

//print the elements present in the stack
void print()
{
int i;
printf("Stack:");
for(i=0;i<=top;i++)
{
printf("%d",A[i]);
}
printf("\n");
}

//main function
int main()
{
push(3);
print();
push(5);
print();
push(3);
print();
pop();
print();
push(6);
print();
return 0;

}
