//implementation of queue using array
#include<stdio.h>
#include<stdlib.h>

int A[10],rear=-1,front=-1;

//Function to check whether queue is empty or not
void Isempty()
{
if(rear==-1 && front==-1)
{
printf("Queue is empty\n");
return;
}
else{
printf("Queue is not empty");
return;
}
}

//function to insert an element in the queue
void Enqueue(int x)
{
if(rear==-1 && front==-1)
{
rear=0;
front=0;
A[rear]=x;
}
else if(rear==sizeof(A)-1)
{
printf("No further insertion is possible as the queue is full now!\n");
return;
}
else{
rear=rear+1;
A[rear]=x;
}
}

void Dequeue()
{
if(rear==-1 && front==-1)
{
return;
}
else if(front==rear)
{
front=-1;
rear=-1;
}
else{
front=front+1;
}
}

void print()
{
int i;
for(i=front;i<=rear;i++)
{
printf("%d",A[i]);
}
}

int main()
{
Isempty();

printf("Queue is:");
Enqueue(1);
print();
printf("\n");
printf("Queue is:");
Enqueue(2);
print();

printf("\n");
printf("Queue is:");
Enqueue(3);
print();

printf("\n");
printf("Queue is:");
Enqueue(7);
print();

printf("\n");
printf("Queue is:");
Dequeue();
print();
printf("\n");
Isempty();



}
