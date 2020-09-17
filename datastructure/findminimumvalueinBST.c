//FIND THE MINIMUM VALUE IN BINARY SEARCH TREE
//FIND THE MAXIMUM VALUE IN BINARY SEARCH TREE
#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node* left;
struct Node* right;
};

//THIS FUNCTION WILL PROVIDE AN EMPTY NODE
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

//THIS FUNCTION WILL RETURN THE MINIMUM ELEMENT PRESENT IN THE BST
int FindMin(struct Node* root)
{
struct Node* p=root;
while(p->left!=NULL)
{
p=p->left;
}
return p->data;
}

//THIS FUNCTION WILL RETURN THE MAXIMUM ELEMENT PRESENT IN THE BST
int FindMax(struct Node* root)
{
struct Node* p=root;
while(p->right!=NULL)
{
p=p->right;
}
return p->data;
}

//MAIN FUNCTION
int main()
{
struct Node* root=NULL;
root=Insert(root,15);
root=Insert(root,10);
root=Insert(root,20);
root=Insert(root,8);
root=Insert(root,12);
root=Insert(root,17);
root=Insert(root,25);
printf("The minimum element present in the Binary search tree is:");
printf("%d",FindMin(root));
printf("\n");
printf("The maximum element present in the Binary search tree is:");
printf("%d",FindMax(root));
}
