#include<bits/stdc++.h>
using namespace std;
struct BST
{
    int data;
    BST *left,*right;

};
int a[2000000];

BST *newnode(int item)
{
    BST *tmp=new BST;
    tmp->data=item;
    tmp->left=tmp->right=NULL;
    return tmp;
}
BST *insert(BST *root,int item)
{
    if(root==NULL)
        return newnode(item);
    if(item<root->data)
        root->left=insert(root->left,item);
    else
        root->right=insert(root->right,item);
    return root;
}
BST* Find(BST *root, int item)
{
    if(root == NULL)
        return NULL;
    else if(root->data == item)
        return root;
    else if(root->data < item)
        return Find(root->right,item);
    else
        return Find(root->left,item);
}
BST *findmaximum(BST *root)
{
    while(root->right!=0)
        root=root->right;
    return root;
}
BST *findPredecessor(BST *root,int item)
{
    BST *curr=Find(root,item);
    if(curr==nullptr)
        return nullptr;
    if(curr->left!=0) // has left subtree
    {
        return findmaximum(curr->left);
    }
    else
    {
        // no left subtree
        BST *pre=0,*ancestor=root;
        while(curr!=ancestor)
        {
            if(ancestor->data>curr->data)
                ancestor=ancestor->left;
            else
            {
                pre=ancestor;
                ancestor=ancestor->right;
            }
        }
        return pre;
    }
}

int main()
{
    int n,i,x;
    printf("Enter the number of elements to add: ");
    cin>>n;
    BST *root=0;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        x=a[i];
        root=insert(root,x);
    }

    for(i=0; i<n; i++)
    {

        x=a[i];
        BST *pre= findPredecessor(root,x);
        if(pre!=NULL)
            cout<<"Predecessor of node "<<x<<" is: "<<pre->data<<endl;
        else
            cout<<"Predecessor doesn't exist for  node "<<x<<endl;
    }
    return 0;
}
