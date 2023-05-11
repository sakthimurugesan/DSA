#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* create()
{
    int x;
    struct Node *newnode = new Node();
    cin>>x;
    if(x==-1)
    {
        return 0;
    }
    cout<<"Left child Data for "<<x;
    newnode->left = create();
    cout<<"\nRight child Data for "<<x;
    newnode->right = create();
    return newnode;
}

int main()
{
    struct Node *root;
    root = NULL;
    root = creat();
}