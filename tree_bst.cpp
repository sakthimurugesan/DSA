#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *root = NULL;

void insert(int a)
{
    struct Node *newnode = new Node();
    struct Node *temp;
    temp = root;
    newnode->data = a;
    newnode->left = NULL;
    newnode->right = NULL;
    if(temp==NULL)
    {
        root = newnode;
    }
    else
    {
        while(temp->data > newnode->data && temp->left != NULL)
        {
            temp = temp->left;
            if(temp->data > newnode->data && temp->left == NULL)
            {
                temp->left = newnode;
                break;
            }
        }
        while(temp->data < newnode->data && temp->left != NULL)
        {
            temp = temp->right;
            if(temp->data < newnode->data && temp->left == NULL)
            {
                temp->right = newnode;
                break;
            }
        }
    }
}

void display(struct Node *root)
{
    struct Node *temp = new  Node();
    temp = root;
    if(temp != NULL)
    {
        display(temp->left);
        cout<<temp->data<<" ";
        display(temp->right);
    }
}
/*struct Node* create()
{
    int x;
    struct Node *newnode = new Node();
    cin>>x;
    if(x==-1)
    {
        return 0;
    }
    cout<<"Left child Data for "<<x<<" ";
    newnode->left = create();
    cout<<"\nRight child Data for "<<x<<" ";
    newnode->right = create();
    return newnode;
}*/

int main()
{
    struct Node *root = new Node();
    //root = NULL;
    //root = create();
    int a;
    do
    {
        cin>>a;
        if(a==-1)
        {
            break;
        }
        insert(a);
    }while(a!=-1);
    display(root);
}
