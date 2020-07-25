//array implementation of queue
#include<stdio.h>
#include<stdlib.h>

int A[10],front=-1,rear=-1;

//to check whether the queue is empty or not
int Isempty()
{
if(rear==-1 && front==-1)
{
return 1;
}
else
{
return 0;
}
}

//to insert into queue
void Enqueue(int x)
{
if(rear==sizeof(A)-1)
{
printf("The queue is full");
}
else if(front==-1 && rear==-1)
{
rear=0;
front=0;
A[rear]=x;
}
else
{
rear=rear+1;
}
A[rear]=x;
}

//to delete an element from queue
int Dequeue()
{
if(front==-1 && rear==-1)
{
return 0;
}
else if(front==rear)
{
front=-1;
rear=-1;
}
else
{
front=front+1;
}
return A[front];
}
void print()
{
int i;
printf("The queue is:");
for(i=front;i<=rear;i++)
{
printf("%d",A[i]);

}
}

//main function
int main()
{
Isempty();
Enqueue(2);
Enqueue(3);
Enqueue(4);
Enqueue(5);
Enqueue(6);
Enqueue(7);
print();
printf("\n");
Dequeue();
Dequeue();
print();
printf("\n");
Enqueue(8);
print();
}

