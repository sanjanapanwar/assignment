//to merge two sorted linked list
#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node* next;
};
struct Node* head1;
struct Node* head2;
struct Node* head=NULL;
void insert1(int x)//insert at the beggining of a linked list1
{
struct Node* temp1=(struct Node*)malloc(sizeof(struct Node));
temp1->data=x;
temp1->next=head1;
head1=temp1;
}

//insert at beginning of a linked list2
void insert2(int y)
{
struct Node* temp2=(struct Node*)malloc(sizeof(struct Node));
temp2->data=y;
temp2->next=head2;
head2=temp2;
}

//print linked list1
void print1()
{
struct Node* temp1=head1;
while(temp1!=NULL)
{
printf("%d",temp1->data);
temp1=temp1->next;
}
printf("\n");
}

//print linked list2
void print2()
{
struct Node* temp2=head2;
while(temp2!=NULL)
{
printf("%d",temp2->data);
temp2=temp2->next;
}
printf("\n");

}

//Merge two sorted linked list
void mergetwosortedlinkedlist()
{
struct Node* temp1=head1;
struct Node* temp2=head2;
struct Node* next1;
struct Node* next2;
struct Node* temp;
while(temp1!=NULL || temp2!=NULL)
{
    next1=temp1->next;
    next2=temp2->next;
    if(temp1->data<=temp2->data &&temp1!=NULL)
    {
        if(head==NULL)
        {
        head=temp1;
        temp1->next=NULL;
        head1=next1;
        temp1=head1;
        temp=head;
        }
        else {
        temp=temp1;
        temp1->next=NULL;
        head1=next1;
        temp=temp->next;



        }

    }
    else{
        if(head==NULL)
        {
    head=temp2;
    head2=next2;
    temp2=temp2->next;
    temp=head;}
    else {
    temp=temp2;
    temp2->next=NULL;
    head2=next2;
    temp=temp->next;
    }
    }
}

}

void printmerge()
{
struct Node* temp=head;
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
}

int main()
{
head1=NULL;
head2=NULL;
printf("Linked list1:");
insert1(4);
insert1(3);
insert1(2);
insert1(1);
print1();
printf("linkedlist2:");
insert2(7);
insert2(5);
insert2(3);
print2();
printf("The merge list :");
mergetwosortedlinkedlist();
printmerge();

}
