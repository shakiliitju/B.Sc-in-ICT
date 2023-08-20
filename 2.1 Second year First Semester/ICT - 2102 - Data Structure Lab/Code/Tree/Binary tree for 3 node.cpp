#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node*left,*right;
};

int main()
{
    int a,b,c;
    cin >>a >>b>>c;
    struct node *p,*temp,*l,*r;

    p = new node();
    l = new node();
    r = new node();

    p->data=a;
    l->data=b;
    r->data = c;

    p->left = l;
    p->right =r;

    temp = p;
    cout <<"Prent = "  << temp->data<< endl;
    temp = p->left;
    cout<<"Left  = "  <<  temp->data << endl;
    temp = p->right;
    cout <<"Right = " << temp->data << endl;
}
