//Array implementation of stack
#include<stdio.h>
#include<stdlib.h>
int A[5],top=-1;
//function to check whether stack is empty or full
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

//function function to print the elements of stack
void print()
{
int i;
for(i=0;i<=top;i++)
{
printf("%d",A[i]);
}
return;
}
//main function
int main()
{
Isempty();
pop();
printf("\n");
printf("The stack is:");
push(3);
print();
printf("\n");
printf("The stack is:");
push(4);
print();
printf("\n");
printf("The stack is:");
push(5);
print();
printf("\n");
pop();
printf("The stack is:");
print();


}
