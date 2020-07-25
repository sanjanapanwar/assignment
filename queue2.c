//Linked list implementataion of queue
#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node* next;
};

struct Node* front=NULL;
struct Node* rear=NULL;

//insertion of element from end
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

//removal of element from head
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
else{
front=front->next;
}
free(temp);

}

//print the elements of queue
void print()
{
struct Node* temp=front;
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
}


int main()
{
Enqueue(1);
Enqueue(2);
Enqueue(3);
Enqueue(4);
Enqueue(5);
Enqueue(6);
printf("The queue is:");
print();
printf("\n");
printf("The queue is:");
Dequeue();
print();
printf("\n");
printf("The queue is:");
Dequeue();
print();


}
