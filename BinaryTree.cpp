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
    newnode->data=x;
    cout<<"Left child Data for "<<x<<" ";
    newnode->left = create();
    cout<<"\nRight child Data for "<<x<<" ";
    newnode->right = create();
    return newnode;
}
void postOrder(struct Node *root)
{
    if(root==0){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
void preOrder(struct Node *root)
{
     if(root==0){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(struct Node *root)
{
     if(root==0){
        return;
    }
    preOrder(root->left);
    cout<<root->data<<" ";
    preOrder(root->right);
}



int main()
{
    struct Node *root;
    root = NULL;
    root = create();
    preOrder(root);cout<<endl;
    postOrder(root);cout<<endl;
    inOrder(root);cout<<endl;

}