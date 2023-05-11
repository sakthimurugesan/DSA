#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insert(int value)
{
    struct Node *newnode = new Node();
    newnode -> data = value;
    if (head == NULL)
    {
        newnode -> next = NULL;
        head = newnode;
    }
    else
    {
        newnode -> next = head;
        head = newnode;
    }
}
//newline added

//remove one line
void deletionAtEnd()
{
    struct Node *ptr = new Node();
    ptr = head;
    struct Node *tail  = new Node();
    tail=head->next;
    while(tail->next!=NULL)
    {
       ptr=tail;
       tail=tail->next;
    }
    ptr->next=0;
    delete tail;

    
}

void display() {
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}
int main() {
  cout<<"Enter number of the list elements: ";
  int n,ele ; 
  cin>>n;
  for(int i = 0 ; i<n ; i++)
  {
    cin>>ele;
    insert(ele);
  }

   cout<<"The linked list is: ";
   display();
   return 0;
}