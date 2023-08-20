#include<bits/stdc++.h>
using namespace std;
struct BST
{
    int data;
    BST *left,*right;
};
int a[500000];
BST *newnode(int value)
{
    BST *tmp=new BST;
    tmp->data=value;
    tmp->left=tmp->right=NULL;
    return tmp;
}
BST *insert(BST *root,int item)
{
    if(root==NULL)
        return newnode(item);
    else if(root->data<item)
        root->right= insert(root->right,item);
    else
        root->left=insert(root->left,item);
    return root;
}
void inorder(BST *root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}
int main()
{
    int n,x;
    printf("Enter the number of elements to add: ");
    cin>>n;
    BST *root=NULL;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];

    }
    for(int i=0; i<n; i++)
    {
        x=a[i];
        root=insert(root,x);
    }
    inorder(root);
}
