#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
};
node *root=0;
struct node* create(int a)
{
    struct node *newnode = new node();
    newnode->data = a;
    struct node *temp = root;
    
}