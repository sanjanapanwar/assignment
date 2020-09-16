//IMPLEMENTATION OF BINARY SEARCH TREE
#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node* left;
struct Node* right;
};

//THIS FUNCTION WILL CREATE A NEW NODE
struct Node* getnewnode(int x)
{
struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
newnode->data=x;
newnode->left=NULL;
newnode->right=NULL;
return newnode;
}

//THIS FUNCTION WILL INSERT THE ELEMENT INTO THE BINARY SEARCH TREE
struct Node* Insert(struct Node* root,int data)
{
if(root==NULL)
{
root=getnewnode(data);
}
else if(data<=root->data)
{
root->left=Insert(root->left,data);
}
else
{
root->right=Insert(root->right,data);
}

return root;
}

//THIS FUNCTION WILL SEARCH FOR THE ELEMENT IN THE BST WHETHER THE ELEMENT IS PRESENT OR NOT
int Search(struct Node* root,int data)
{
if(root==NULL)
{
return 0;
}
else if(root->data==data)
{
return 1;
}
else if(data<=root->data)
{
return Search(root->left,data);
}
else
{
return Search(root->right,data);
}
}

//MAIN FUNCTION
int main()
{
int n;
struct Node* root=NULL;
root=Insert(root,15);
root=Insert(root,10);
root=Insert(root,20);
root=Insert(root,25);
root=Insert(root,8);
root=Insert(root,12);
printf("Enter a number to be searched:\n");
scanf("%d",&n);
if(Search(root,n)==1)
{
printf("Found\n");
}
else
{
printf("Not Found");
}

}
