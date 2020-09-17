//FIND THE HEIGHT OF THE BINARY SEARCH TREE
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

//THIS FUNCTION WILL RETURN MAXIMUM VALUE
int max(int a,int b)
{
if(a>b)
{
return a;
}
else{
return b;
}
}

//THIS FUNCTIO WILL RETURN THE HEIGHT OF THE BINARY SEARCH TREE
int findheightofBST(struct Node* root)
{
int left_height,right_height;
if(root==NULL)
{
return -1;
}
left_height=findheightofBST(root->left);
right_height=findheightofBST(root->right);

return max(left_height,right_height)+1;

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
root=Insert(root,13);
printf("The height of Binary Search Tree:");
printf("%d",findheightofBST(root));
}

