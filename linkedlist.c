#include<stdlib.h>
#include<stdio.h>
struct Node{
int data;
struct Node* next;
};
struct Node* head;
void insert(int x)
{
struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
temp->data=x;
temp->next=head;
head=temp;

//if(head!=NULL)
//{
//temp->next=head;
//head=temp;
//}
}
void print()
{
struct Node*temp=head;
printf("The list is:");
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
int n,i,x;
printf("How many numbers:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the number here:");
scanf("%d",&x);
insert(x);
print();
}
}
