#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    // Creating Constructor

    Node(int data)
    {
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;

    }
};

// Traversing on linked list
void print(Node* head)
{
    Node* temp = head;
    
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

// function to find the length of linked list.
int getLength(Node* head)
{
    Node* temp = head;
    int count = 0;

    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

void insertAtHead(Node* &tail, Node* &head, int d)
{
    if(head == NULL)
    {
    Node* temp = new Node(d);
    head = temp;
    tail = temp;
    }
    else{
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
    }

}

// void insertAtHead(Node*& head, int d) {
//     Node* temp = new Node(d);
//     temp->next = head;
//     if (head != NULL) {
//         head->prev = temp;
//     }
//     head = temp;
// }


void insertAtTail(Node* &tail,Node* &head, int d) {

    if(tail == NULL)
    {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
    }
    
}

// insert at any position
 void insertAtPosition(Node* & tail, Node* &head, int position, int d)
 {
    // insert at start
    if(position == 1)
    {
        insertAtHead(tail,head,d);
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
        insertAtTail(tail,head,d);
        return;
    }

    // creating a node for d
//step 1
    Node* nodeToInsert = new Node(d);
//step 2
    nodeToInsert -> next = temp -> next;
// step 3
    nodeToInsert -> prev = temp;
//step 4
    temp -> next -> prev = nodeToInsert;
// step 5
    temp -> next = nodeToInsert;

 }



int main()
{
    //Node* node1 = new Node(5);
    // cout<<node1->data<<endl;

    Node* head = NULL;
    Node* tail = NULL;
    // print(head);
   // cout<<endl;
   // cout<<"the length of the linked list is "<<getLength(head);

    insertAtHead(tail,head,10);
   // insertAtHead(head,20);
    //print(head);


     insertAtTail(tail,head,100);
    // insertAtTail(tail,200);
     print(head);
     cout<<endl;

    insertAtPosition(tail,head,1,7);
    print(head);
    cout<<endl;

    insertAtPosition(tail,head,4,17);
    print(head);
    cout<<endl;

    return 0;
}