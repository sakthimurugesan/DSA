#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
    //struct Node *prev; || doubly linked list
};

struct Node *head = NULL;

void insert(int value)
{
    struct Node *newnode = new Node();
    newnode -> data = value;
    if (head == NULL)
    {
        newnode -> next = NULL;
    }
    else
    {
        newnode -> next = head;
        head = newnode;
    }
}
//newline added
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
    tr->next=0;
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
   insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(9);
   cout<<"The linked list is: ";
   display();
   cout<<endl;
   deletionAtEnd();
   display();
   return 0;
}