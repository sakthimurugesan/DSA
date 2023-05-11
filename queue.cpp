#include<iostream>
using namespace std;
# define MAX_SIZE  100
int queue[MAX_SIZE];
int front = -1;
int rear = -1;

void enqueue(int data)
{
    if(rear == MAX_SIZE-1)
    {
        cout<<"Full";
    }
    else if(front == -1 && rear == -1)
    {
        rear = 0;
        front = 0;
        queue[rear] = data;
    }
    else
    {
        rear++;
        queue[rear] = data;
    }
}

void dequeue()
{
    if(front == -1 && rear == -1)
    {
        cout<<"Empty";
    }
    else if(front==rear)
    {
        front = -1;
        rear= -1;

    }
    else
    {
        cout<<queue[front];
        front++;
    }
}

void display()
{
    if(front == -1 && rear == -1)
    {
        cout<<"Empty";
    }
    for(int i = front ; i<=rear ; i++)
    {
        cout<<queue[i]<<" ";
    }
}

void peek()
{
    if(front == -1 && rear == -1)
    {
        cout<<"Empty";
    }
    else
    {
        cout<<endl<<"The First Element is : "<<queue[front]<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i = 0 ; i<n ; i++)
    {
        int b;
        cin>>b;
        enqueue(b);
    }
    display();
    peek();
    dequeue();
    display();
}