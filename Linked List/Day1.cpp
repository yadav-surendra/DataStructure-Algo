#include<iostream>
using namespace std;

class Node { 

    public:
    int data;
    Node* next;

// Constructor
    Node(int d)
    {
        this -> data = d;
        this -> next = NULL;
    }
    
};

void insertAtHead(Node* &head , int d)
{
    // create new node
    Node* temp = new Node(d);
    temp-> next = head;
    head = temp;
}

void print(Node* &head) {

    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    Node* temp = head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main()
{
   
   // create a new node
   Node* node1 = new Node(10);
//    cout<< node1->data<<endl;
//    cout<< node1->next; 

// hehad pointed to node1
    Node* head = node1;

    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtHead(head,25);
   // cout<<head->data;

    print(head);

    return 0;
}