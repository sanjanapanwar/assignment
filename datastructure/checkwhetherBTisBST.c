//DEPTH FIRST SEARTH
//INORDER TRAVERSAL OF BINARY TREE
//INORDER TRAVERSAL GIVES RESULT IN SORTED ORDER IN CASE OF BST
//IF THE RESULT OF BINARY TREE COMES OUT TO BE IN SORTED ORDER THEN THE TREE IS BINARY SEARCH TREE
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

int isBST(struct Node* root)
{
	static struct Node *prev = NULL;

	// traverse the tree in inorder fashion and keep track of prev node
	if (root)
	{
		if (isBST(root->left)!=1)
		return 0;

		// Allows only distinct valued nodes
		if (prev != NULL && root->data <= prev->data)
		return 0;

		prev = root;

		return isBST(root->right);
	}

	return 1;
}


//MAIN FUNCTION
int main()
{
int p;
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
printf("\n");
printf("\n");
p=isBST(root);
if(p==0)
{
printf("NOT BINARY SEARCH TREE");
}
else{
printf("YES! IT IS BINARY SEARCH TREE");
}
printf("\n");
}

