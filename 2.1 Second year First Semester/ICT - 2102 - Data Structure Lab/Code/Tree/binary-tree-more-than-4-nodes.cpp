#include<bits/stdc++.h>
using namespace std;
struct btree
{
    int data;
    btree *left;
    btree *right;
};
btree *root=0;
btree *creat()
{
    int val;
    btree *newbtree=new btree();
    cout<<"Enter node (enter -1 for no node): "<<endl;
    cin>>val;
    if(val==-1)
        return 0;


    newbtree->data=val;
    newbtree->left=0;
    newbtree->right=0;

    cout<<"Enter the left child of :"<<val<<" ";
    newbtree->left=creat();

    cout<<"Enter the right child of "<<val<<" ";
    newbtree->right=creat();
    return newbtree;


}
void inorder(btree *r)
{
    //btree *temp=root;
    btree *node=r;
    if(node==NULL)
    {
        return;
    }
    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
    return;
}
int main()
{
    root=creat();
    inorder(root);
    return 0;
}
