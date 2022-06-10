
/// Md. Shakil Hossain
/// Exam Roll - 192340
/// Class Roll - 2023
/// Final Lab Exam
/// Question 4


#include<bits/stdc++.h>
using namespace std;

struct bst
{
    int data;
    bst* left;
    bst* right;
};


bst* newnode(int data)
{
    bst* newnode = new bst();
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}


bst* Insert(bst* root, int data )
{
    if(root==NULL)
    {
        root= newnode(data);
    }
    else if(data<= root->data)
    {
        root->left=Insert(root->left, data);
    }
    else if( data > root->data)
    {
        root->right=Insert(root->right,data);
    }

    return root;
}


bool Search(bst* root, int data )
{
    if(root==NULL)
    {
        return false;
    }
    else if( root->data==data)
    {
        return true;
    }
    else if(data<=root->data)
    {
        return Search(root->left,data);
    }
    else if(data>root->data)
    {
        return Search(root->right,data);
    }
}


void porder(bst *temp)
{

    if(temp==NULL)
    {
        return;
    }
    cout<<temp->data<<" ";
    porder(temp->left);
    porder(temp->right);
    return;
}


int main()
{
    bst* root;
    root = NULL;
    int n,i,x;
    cout<<"Enter size of the BST :  ";
    cin>>n;
    cout<<"Enter data : ";
    for(i=1; i<=n; i++)
    {
        cin>>x;
        root= Insert(root, x);
    }

    cout<<"\nBST Pre-order"<<endl;
    porder(root);

    int num;
    cout<<"\nEnter data you search: ";
    cin>>num;
    if(Search(root,num)==true)
    {
        cout<<"Number is found"<<endl;
    }
    else
    {
        cout<<"Number is not found"<<endl;
    }
    return 0;
}

