//delete nth node from a linked list
#include<stdlib.h>
#include<stdio.h>
struct Node{
int data;
struct Node* next;
};
struct Node* head;
void insert(int data,int n)
{
//inserting a node at the end of the linked list
int i;
struct Node* temp1=(struct Node*)malloc(sizeof(struct Node));
temp1->data=data;
temp1->next=NULL;
head=temp1;
for(i=1;i<n;i++)
{
struct Node* temp2=(struct Node*)malloc(sizeof(struct Node));
temp2->data=i;
temp2->next=NULL;
temp1->next=temp2;
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
void deletenode(int n)
{
int i;
struct Node* temp2=head;
for(i=0;i<n-2;i++)
{
temp2=temp2->next;
}
if(n==1)
{
head=temp2->next;
free(temp2);
}
else
{
struct Node* temp1;
temp1=temp2->next;
temp2->next=temp1->next;
free(temp1);
}
}

int main()
{
head=NULL;
int n;
insert(4,5);
print();
printf("enter the value of node position that you want to delete:");
scanf("%d",&n);
deletenode(n);
print();
return 0;
}

