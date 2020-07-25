//inserting at the head of node
#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node* next;
struct Node* prev;
};
struct Node* head;
//function to get a new node
struct Node* GetNewNode(int x)
{
struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
newnode->data=x;
newnode->prev=NULL;
newnode->next=NULL;
return newnode;
}

//function to insert at the head of the node
void insertathead(int x)
{
struct Node* newnode=GetNewNode(x);
if(head==NULL)
{
head=newnode;
return;
}
head->prev=newnode;
newnode->next=head;
head=newnode;

}

//function to print the elements of linked list in forward direction
void print()
{
struct Node* temp=head;
printf("Linked list forward:");
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
printf("\n");
//return temp;
}

//function to print linked list in reverse order
void backwardprint()
{
//struct Node* temp=temp;
struct Node* temp=head;
//take node to the end of the list
if(temp==NULL)
{
return;//empty list
}
while(temp->next!=NULL)
{
temp=temp->next;
}
//
printf("linked list in reverse:");
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->prev;
}
printf("\n");

}

//main function
int main()
{
head=NULL;
insertathead(3);
insertathead(4);
insertathead(5);
insertathead(6);
print();
backwardprint();

return 0;


}

