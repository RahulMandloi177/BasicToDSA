#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtHead(node* &head,int val)
{
    node* n=new node(val);
    n->next=head;
    head=n;
}
void insertAtTail(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void deletionAtHead(node* &head)
{
   node* todelete=head;
   head=head->next;

   delete todelete;
}
void deletion(node* &head,int val)
{

  node* temp=head;
  while(temp->next->data !=val)
  {
     temp=temp->next;  
  }
  node* todelete=temp->next;
  temp->next=temp->next->next;
  delete todelete;
   
}

bool search(node* head,int key)
{
    node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            return true ;
        }
        temp=temp->next;
    }

    return false;
}

// Iterative way to reverse a linked list

node* reverse(node* &head)
{
   node* prev=NULL;
   node* current=head;
   node* next; 

   while(current!=NULL)
   {
       next=current->next;
       current->next=prev;

       prev=current;
       current=next;
   }

   return prev; 
}

// Recursive way to reverse a linked list

node* recursiveReverse(node* &head)
{  
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    node* newhead=recursiveReverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}

node* reverseKnodes(node *&head, int k)
{
    node *prev = NULL;
    node *current = head;
    node *next;

    int count = 0;
    while (current != NULL && count < k)
    {
        next = current->next;
        current->next = prev;

        prev = current;
        current = next;
        count++;
    }

    if (next != NULL)
    {
        head->next = reverseKnodes(next, k);
    }
    return prev;
}   

void display(node* head)
{
    node*temp=head;
    while(temp!=NULL)
    {
       cout<<temp->data<<"->";
       temp=temp->next; 
    }
    cout<<"NULL"<<endl;
}

int main()
{
    node*head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    //insertAtHead(head,4);
    // display(head);
    // cout<<search(head,3)<<endl;
    // deletion(head,3);
    //deletionAtHead(head);
    //display(head);
    //node* newhead=reverse(head);
    //display(newhead);

    //node* newhead=recursiveReverse(head);
    //display(newhead);

    int k=2;
    node* newhead = reverseKnodes(head,k);
    display(head);
}
