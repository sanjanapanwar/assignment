//DEPTH FIRST SEARTH
//INORDER TRAVERSAL OF BINARY TREE
//INORDER TRAVERSAL GIVES RESULT IN SORTED ORDER
#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node* left;
struct Node* right;
};
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

//INORDER TRAVERSAL
//<left><root><right>
void InorderTraversal(struct Node* root)
{
if(root==NULL)
{
return;
}

InorderTraversal(root->left);
printf("%d\t",root->data);
InorderTraversal(root->right);

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
printf("INORDER TRAVERSAL:\n");
InorderTraversal(root);
}

