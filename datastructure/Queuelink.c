//implementation of queue using linked list
#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node* next;
};

struct Node* front=NULL;
struct Node* rear=NULL;

//function to tell whether queue is empty or not
void Isempty()
{
if(front==NULL && rear==NULL)
{
printf("Queue is empty\n");
return;
}
else{
printf("Queue is not empty\n");
return;
}
}

//function to insert an element in the queue from rear end
void Enqueue(int x)
{
struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
temp->data=x;
temp->next=NULL;
if(front==NULL && rear==NULL)
{
front=temp;
rear=temp;
return;
}
rear->next=temp;
rear=temp;
}

//function to delete an element from queue from front end
void Dequeue()
{
struct Node* temp=front;
if(front==NULL && rear==NULL)
{
return;
}
if(front==rear)
{
front=NULL;
rear=NULL;
}
front=front->next;
free(temp);
}

//function to print the elements of Queue
void Print()
{
struct Node* temp=front;
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
}

//main function
void main()
{
Isempty();
printf("The queue is:");
Enqueue(2);
Print();
printf("\n");
printf("The queue is:");
Enqueue(3);
Print();
printf("\n");
printf("The queue is:");
Enqueue(4);
Print();
printf("\n");
printf("The queue is:");
Dequeue();
Print();


}
