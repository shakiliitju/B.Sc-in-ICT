#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};

int main()
{
    int a,b,c;
    cout << "Enter Parent, Left, Right" << endl;
    cin >> a >> b >> c;
    struct node *p, *temp, *l, *r;

    p= new node();
    l= new node();
    r= new node();

    p->data =a;
    l->data =b;
    r->data =c;

    p->left = l;
    p->right = r;

    cout << "Parent : " << p->data << endl;
    cout << "Left : " << l->data << endl;
    cout << "Right : " << r->data << endl;
}
