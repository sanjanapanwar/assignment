//implementation of queue using circular Array
#include<stdio.h>
#include<stdlib.h>

int A[4],front=-1,rear=-1;
int N=sizeof(A);

//function to check whether queue is empty or not
void Isempty()
{
if(front==-1 && rear==-1)
{
printf("Queue is empty\n");
return;
}
else
{
printf("Queue is not empty\n");
return;
}
}

//function to insert an element in the queue
void Enqueue(int x)
{
if(front==-1 && rear==-1)
{
front=0;
rear=0;
}
else if((rear+1)%N==front)
{
return;
}
else
{
rear=(rear+1)%N;

}
A[rear]=x;

}

//function to delete an element from the front of the queue
void Dequeue()
{
if(front==-1 && rear==-1)
{
return;
}
else if(front==rear)
{
front=0;
rear=0;
}
else
{
front=(front+1)%N;
}
}

//function to print the elements of queue
void Print()
{
int i;
for(i=front;i<=rear;i++)
{
printf("%d",A[i]);
}
}

//main function
int main()
{
Isempty();
printf("The queue is:");
Enqueue(3);
Print();
printf("\n");
printf("The queue is:");
Enqueue(2);
Print();
printf("\n");
printf("The queue is:");
Enqueue(4);
Print();
printf("\n");
printf("The queue is:");
Enqueue(5);
Print();
printf("\n");
printf("The queue is:");
Enqueue(6);
Print();
printf("\n");
printf("The queue is:");
Enqueue(7);
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
