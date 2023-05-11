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