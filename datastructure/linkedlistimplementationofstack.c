//implementation of stack using linked list
#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node* next;
};

struct Node* top=NULL;

//function to check whether stack is empty or not
void Isempty()
{
if(top==NULL)
{
printf("Stack is empty");
}
else
{
printf("stack is not empty");
}
}
//function to insert element at the top of the stack
void push(int x)
{
struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
temp->data=x;
temp->next=NULL;
if(top==NULL)
{
top=temp;
return;
}
temp->next=top;
top=temp;
}

//function to remove an element from the top of the stack
void pop()
{
struct Node* temp1=top;
if(top==NULL)
{
printf("Stack is empty,nothing to remove");
return;
}
top=top->next;
free(temp1);
}

//function to print the elements of stacks
void print()
{
struct Node* p=top;
while(p!=NULL)
{
printf("%d",p->data);
p=p->next;
}
}

//main function
int main()
{
Isempty();
printf("\n");
printf("Stack is:");
push(3);
print();
printf("\n");
printf("Stack is:");
push(5);
print();
printf("\n");
printf("Stack is:");
push(6);
print();
printf("\n");
printf("Stack is:");
pop();
print();


}
