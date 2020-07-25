//reverse a linked list by iterative method
#include<stdlib.h>
#include<stdio.h>
struct Node{
int data;
struct Node* next;
};
struct Node* head;//global variable
void insert(int n)
{
//inserting a node at the end of the linked list
int i;
struct Node* temp1=(struct Node*)malloc(sizeof(struct Node));
temp1->data=6;
temp1->next=NULL;
head=temp1;
//struct Node* temp=head;
for(i=1;i<n;i++)
{
struct Node* temp2=(struct Node*)malloc(sizeof(struct Node));
temp2->data=i;
temp1->next=temp2;
temp2->next=NULL;
//temp1->next=temp2;
while(temp1->next!=NULL)
{
temp1=temp1->next;
}

}

}
void print()
{
struct Node* temp=head;
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
printf("\n");
}
void reverse()
{
struct Node* prev,*current,*next;
prev=NULL;
current=head;
while(current->next!=NULL)
{
next=current->next;
current->next=prev;
prev=current;
current=next;
}
head=prev;
}

int main()
{
head=NULL;
insert(5);
printf("List before reversing:");
print();
printf("List after reversing:");
reverse();
print();
return 0;
}
