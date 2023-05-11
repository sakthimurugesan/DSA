#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insertAtEnd(int value)
{
    struct Node *newnode = new Node();
    newnode->data = value;
    newnode->next=NULL;

    if(head==NULL)
    {
        head = newnode;
    }
    else
    {
        struct Node *temp = head;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}
detetAtBegin()
{
    struct Node *ptr = new Node();
    ptr = head;
    head = head->next;
    delete(ptr);
}
void display() 
{
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL)
   {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}

int main() {
int n,ele ; 
  cin>>n;
  for(int i = 0 ; i<n ; i++)
  {
    cin>>ele;
    insertAtEnd(ele);
  }
   display();
   cout<<endl;
   detetAtBegin();
   //deletionAtEnd();
   display();
   return 0;
}
