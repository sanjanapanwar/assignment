//implementation of singly linked list
#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node* next;
};

struct Node* head;

//insertion at the beginning of linked list

void insert(int x)
{
struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
temp->data=x;
temp->next=head;
head=temp;

}

//function to insert an element at the end of the list

void insertatend(int x)
{
struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
temp->data=x;
temp->next=NULL;
struct Node* p=head;
while(p->next!=NULL)
{
p=p->next;
}
p->next=temp;
}

//functiom to insert an element at ith position in lined list

void insertatanypos(int x,int n)  //n is the position where you want to insert an element in the linked list
{
int i;
struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
temp->data=x;
struct Node* p=head;

for(i=0;i<n-2;i++)
{
p=p->next;
}
temp->next=p->next;
p->next=temp;

}

//function to delete an element from the beginning of linked list
void deleteatbeg()
{
struct Node* temp=head;
head=temp->next;
free(temp);
}

//function to delete a node at any position in linked list

void deleteanodeatanypos(int n)
{
int i;
struct Node* p=head;
for(i=0;i<n-2;i++)
{
p=p->next;
}
struct Node* temp;
temp=p->next;
p->next=temp->next;
free(temp);
}

//function to print the elements of singly linked list

void print()
{
struct Node* temp=head;
printf("List is:");
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
printf("\n");
}

int main()
{
head=NULL;
insert(2);
print();
insert(3);
print();
insert(4);
print();
insert(5);
print();
insertatend(7);
print();
deleteatbeg();
print();
insertatanypos(6,3);
print();
deleteanodeatanypos(4);
print();
}


