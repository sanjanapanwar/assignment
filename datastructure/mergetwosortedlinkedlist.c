//Merge two sorted linked list
#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node* next;
};

struct Node* head1;

struct Node* head2;

//first sorted linked list creation
void insert1(int x)
{
struct Node* temp1=(struct Node*)malloc(sizeof(struct Node));
temp1->data=x;
temp1->next=head1;
head1=temp1;

}

//second sorted linked list creation

void insert2(int x)
{
struct Node* temp2=(struct Node*)malloc(sizeof(struct Node));
temp2->data=x;
temp2->next=head2;
head2=temp2;

}
//print function
void print1()
{
struct Node* temp1=head1;
printf("List is:");
while(temp1!=NULL)
{
printf("%d",temp1->data);
temp1=temp1->next;
}
printf("\n");
}

//print2 function to print the elements of linked list 2
void print2()
{
struct Node* temp2=head2;
printf("List is:");
while(temp2!=NULL)
{
printf("%d",temp2->data);
temp2=temp2->next;
}
printf("\n");
}

//global variable for new list which we obtain after merging the above two list
struct Node* head;

struct Node* getnewnode()
{
struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
//temp->data=NULL;
temp->next=NULL;
return temp;
}

void Merge()
{
struct Node* temp=getnewnode();
head=temp;
struct Node* tail=temp;

while(head1!=NULL && head2!=NULL)
{
struct Node* temp=getnewnode();
if(head1->data<head2->data)
{
temp->data=head1->data;
head1=head1->next;
tail->next=temp;
tail=temp;
}
else
{
temp->data=head2->data;
head2=head2->next;
tail->next=temp;
tail=temp;
}


}
if(head1==NULL)
{
tail->next=head2;
}
if(head2==NULL)
{
tail->next=head1;
}
}

void print()
{
struct Node* temp=head->next;
printf("List is:");
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
head1=NULL;
head2=NULL;
insert1(9);
insert1(7);
insert1(5);
print1();
insert2(8);
insert2(6);
insert2(4);
print2();
head=NULL;
Merge();
print();
}
