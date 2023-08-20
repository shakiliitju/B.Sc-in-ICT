#include<bits/stdc++.h>
using namespace std;

struct btree
{
    int data;
    btree*left;
    btree *right;
};
btree * root=0;
btree *create()
{
    int val;
    btree *newbtree= new btree();
    cout<<"Enter node: (Enter -1 for no node)"<<endl;;
    cin>>val;
    if(val==-1)
        return 0 ;
    newbtree->data=val;
    cout<<"Enter left child of "<<val<<" : ";
    newbtree->left=create();
    cout<<"Enter right child of "<<val<<" : ";
    newbtree->right=create();
    return newbtree;
}

void inorder(btree *r)
{
    btree *temp=r;
    if(temp==NULL)
        return;
    inorder(temp->left);
    cout<<temp->data<<" ";
    inorder(temp->right);
    return;
}


void preorder(btree *r)
{
    btree *temp=r;
    if(temp==NULL)
        return;
    cout <<temp->data<<" ";
    preorder(temp->left);
    preorder(temp->right);
    return;
}


void postorder(btree *r)
{
    btree *temp=r;
    if(temp==NULL)
        return;
    postorder(temp->left);
    postorder(temp->right);
    cout<<temp->data<<" ";
    return;
}



main()
{
    root=create();
    cout << "\nInorder : ";
    inorder(root);
    cout << "\npreorder : ";
    preorder(root);
    cout << "\npostorder : ";
    postorder(root);
    cout << endl;
    return 0;
}
