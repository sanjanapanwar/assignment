//Reverse a linked list using stack in C
#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node* next;
};

//Global variable
struct Node* head=NULL;

//function to create a linked list
void insert(int x)
{
struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
temp->data=x;
temp->next=head;
head=temp;
}

//declaration of stack
struct Node* stack[10];
int top=-1;

//function to push the elements of linked list into stack
void push(struct Node** y)
{
if(top==sizeof(stack)-1)
{
return;
}
top=top+1;
stack[top]=*y;
}

//function to remove the elements from the top of the stack
void pop()
{
if(top==-1)
{
return;
}
top=top-1;
}

//this function will return the top of the stack
struct Node* Top()
{
return stack[top];
}

//this function will reverse the linked list
void reverse()
{
struct Node* temp=head;
while(temp!=NULL)
{
push(&temp);
temp=temp->next;
}
struct Node*p=Top();
head=p;
while(top!=-1)
{
p->next=Top();
pop();
p=p->next;
}
p->next=NULL;
}

//function to print the linked list
void print()
{
struct Node* temp=head;
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
}

int main()
{
printf("Linked list is:");
insert(2);
insert(3);
insert(4);
insert(5);
insert(6);
print();
printf("\n");
printf("Linked list in reverse order is:");
reverse();
print();
}
