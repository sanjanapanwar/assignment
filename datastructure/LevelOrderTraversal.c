//TREE TRAVERSAL----BREADTH FIRST TRAVERSAL
//(LEVEL ORDER TRAVERSAL
#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node* left;
struct Node* right;
};

//DECLARATION OF QUEUE
int rear=-1;
int front=-1;
struct Node* Queue[30];

//ENQUEUE FUNCTION
void Enqueue(struct Node** p)
{
if(front==-1 && rear==-1)
{
front=0;
rear=0;
Queue[rear]=*p;
}
else
{
rear=rear+1;
Queue[rear]=*p;
}
}

//DEQUEUE FUNCTION
void Dequeue()
{
if(front==-1 && rear==-1)
{
printf("Queue is empty");
return;
}
else
{
front=front+1;
}
}

//THIS FUNCTION WILL CHECK WHETHER THE QUEUE IS EMPTY OR NOT
int Isempty()
{
if(front==-1 && rear==-1)
{
return 1;
}
else
{
return 0;
}
}

//RETURN NEW NODE
struct Node* getnewnode(int x)
{
struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
newnode->data=x;
newnode->left=NULL;
newnode->right=NULL;
return newnode;
}

//THIS FUNCTION WILL INSERT AN ELEMENT IN THE BINARY SEARCH TREE
struct Node* Insert(struct Node* root,int x)
{
if(root==NULL)
{
root=getnewnode(x);
}
else if(x<=root->data)
{
root->left=Insert(root->left,x);
}
else
{
root->right=Insert(root->right,x);
}
return root;
}

//BREADTH FIRST TRAVERSAL---TRAVERSAL OF BST USING LEVEL ORDER TRAVERSAL
void Level_Order_Traversal(struct Node* root)
{
if(root==NULL)
{
printf("Tree is empty");
return;
}

Enqueue(&root);
while(Isempty()!=1)
{
struct Node* current=Queue[front];
printf("%d",current->data);
if(current->left!=NULL)
{
Enqueue(&current->left);
}
if(current->right!=NULL)
{
Enqueue(&current->right);
}
Dequeue();
}
}

//MAIN FUNCTION
int main()
{
struct Node* root=NULL;
root=Insert(root,15);
Insert(root,10);
Insert(root,20);
Insert(root,8);
Insert(root,12);
Insert(root,17);
Insert(root,25);
Insert(root,13);
printf("LEVEL ORDER TRAVERSAL:\n");
Level_Order_Traversal(root);
}


