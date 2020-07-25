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
for(i=0;i<n;i++)
{
struct Node* temp1=(struct Node*)malloc(sizeof(struct Node));
if(i==0)
{
temp1->data=i;
temp1->next=NULL;
head=temp1;
}
else
{
struct Node* temp2=temp1;
while(temp2->next==NULL)
{
temp2->next=temp1;
}

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
