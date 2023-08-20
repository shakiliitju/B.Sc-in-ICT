#include<bits/stdc++.h>
using namespace std;

struct btree
{
    int data;
    btree *left=NULL;
    btree *right=NULL;
};

class ShakilHossain
{
public:
    void node(){
        cout<<"Enter the three value: ";
    int a,b,c;
    cin>>a>>b>>c;
    btree *p,*l,*r;

    p=new btree;
    l=new btree;
    r=new btree;

    p->data=a;
    l->data=b;
    r->data=c;

    p->left=l;
    p->right=r;

    cout<<"Parent is: "<<p->data<<endl;
    cout<<"left child of parent: "<<l->data<<endl;
    cout<<"right child of parent: "<<r->data<<endl;}
};


int main()
{
    ShakilHossain o;
    o.node();
    return 0;
}
