#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}
;
Node *front = NULL;
struct Node *rear = NULL;

void enqueue(int ele)
{
    struct Node *newnode = new Node();
    newnode->data = ele;
    newnode->next = NULL;
    if(rear == NULL)
    {
        front=rear=newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}

void dequeue()
{
    struct Node *temp = new Node();
    if(front == NULL && rear == NULL)
    {
        cout<<"Empty";
    }
    else
    {
        cout<<front->data;
        temp = front;
        front = front->next;
        delete temp;
    }
}

void display()
{
    if(front == NULL && rear = NULL)
    {
        cout<<"Empty Queue";
    }
    struct Node *temp = front;
    while(temp != NULL)
    {
        cout<<temp->data;
        temp = temp->next;
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        int b;
        cin>>b;
        enqueue(b);
    }
    display();
}