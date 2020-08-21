//implementation of doubly linked list

#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node* next;
struct Node* prev;
};

struct Node* head;//Global variable

//function to get a new node;

struct Node* getnewnode(int x)
{
struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
temp->data=x;
temp->prev=NULL;
temp->next=NULL;
return temp;
}

//function to insert at the beginning of the list
void insertatbeg(int x)
{
struct Node* temp=getnewnode(x);
if(head==NULL)
{
head=temp;
return;
}
head->prev=temp;
temp->next=head;
head=temp;
}

//function to insert an element at the end of the linked list
void insertatend(int x)
{
struct Node* temp=getnewnode(x);
if(head==NULL)
{
head=temp;
return;
}
struct Node* p=head;
while(p->next!=NULL)
{
p=p->next;
}
p->next=temp;
temp->prev=p;

}

//function to insert an element at any position in linked list
void insertatanypos(int x,int n)//here n is the position
{
int i;
struct Node* temp=getnewnode(x);
if(head==NULL)
{
head=temp;
return;
}

struct Node* p=head;
for(i=0;i<n-2;i++)
{
p=p->next;
}
struct Node* temp1=p->next;
temp->next=temp1;
temp1->prev=temp;
p->next=temp;
temp->prev=p;

}

//function to delete a node at the beginning of linked list
void deleteatbeg()
{
struct Node* temp=head;
head=temp->next;
free(temp);
}

//function to delete a node at any position of linked list
void deleteatanypos(int n)
{
int i;
struct Node* p=head;
for(i=0;i<n-2;i++)
{
p=p->next;
}
struct Node* temp=p->next;
struct Node* temp1=temp->next;
p->next=temp1;
temp1->prev=p;
free(temp);


}

//function to print the elements of linked list
void print()
{
struct Node* p=head;
printf("the list is:");
while(p!=NULL)
{
printf("%d",p->data);
p=p->next;
}
printf("\n");
}

//function to print a linked list in reverse order

void reverseprint()
{
struct Node* p=head;
printf("reverse list is:");
while(p->next!=NULL)
{
p=p->next;
}
while(p!=NULL)
{
printf("%d",p->data);
p=p->prev;
}
printf("\n");
}

//main function

int main()
{
head=NULL;
insertatbeg(2);
print();
insertatbeg(3);
print();
insertatend(4);
print();
insertatanypos(5,2);
print();
insertatanypos(7,2);
print();
insertatanypos(8,3);
print();
reverseprint();
deleteatbeg();
print();
deleteatanypos(3);
print();


}

