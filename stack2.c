//implementation of stack using linked list
#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node* next;
};

struct Node* top=NULL;

//To insert an element in the stack
void push(int x)
{
struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
temp->data=x;
//if(top==NULL){

//temp->next=NULL;//as top=NULL ,so no need to do this
//top=temp;
//}
//else{
temp->next=top;
top=temp;
//}
}

//To delete an element from the stack
void pop()
{
if(top==NULL)
{
printf("ERROR:no element to pop\n");
return;
}
struct Node* temp;
temp=top;
top=top->next;
free(temp);

}

//print the elements of stack
void print()
{
struct Node* temp=top;
while(temp!=NULL)
{
    printf("%d",temp->data);
    temp=temp->next;
}
printf("\n");
}

//main function
int main()
{
push(3);
print();
push(4);
print();
push(5);
print();
pop();
print();
push(6);
print();



}

