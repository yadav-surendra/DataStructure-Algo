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

     //destructor
    ~Node() {
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }
    
};

void insertAtHead(Node* &head , int d)
{
    // create new node
    Node* temp = new Node(d);
    temp-> next = head;
    head = temp;
}

void insertAtTail(Node* &tail , int d)
{
    // create new node
    Node* temp = new Node(d);
    tail-> next = temp;
    tail = temp;
}

// insert at any position
 void insertAtPosition(Node* tail, Node* head, int position, int d)
 {
    // insert at start
    if(position == 1)
    {
        insertAtHead(head,d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // inserting at last position
    if(temp -> next == NULL)
    {
        insertAtTail(tail,d);
        return;
    }

    // creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;

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


int getLength(Node* head)
{
    int len = 0;
    while(head != NULL)
    {
        len++;
        head = head->next;
    }
    return len;
}

int getMiddleNode(Node* head)
{
    int length = getLength(head);
    int mid = length/2;
    int cnt = 0;

    Node* temp = head;
    while(cnt < mid)
    {
        temp = temp->next;
        cnt++;
    }

    return temp->data;

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
    insertAtHead(head,35);
    insertAtHead(head,50);
    insertAtHead(head,70);
   // cout<<head->data;

   print(head);
   int val = getMiddleNode(head);
   cout<<"The middle node's data is: "<<val<<endl;


    return 0;
}