#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left,*right, *temp;

    node(int n)
    {
        data  = n;
        left   = NULL;
        right = NULL;
    }
};


void inorder(struct node* node)
{
    if (node == NULL)
        return;
    inorder(node->left);
    cout << node->data << " ";
    inorder(node->right);
}



int main()
{

    struct node *root = new node(5);

    root->left  = new node(6);
    root->right = new node(7);

    root->left->left   = new node(9);
    root->left->right = new node(10);
    root->right->left = new node(34);
    root->right->right  = new node(44);

    cout << "\nInorder : ";
    inorder(root);
}

