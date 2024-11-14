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

void insertAtHead(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

// void insertAtHead(Node*& head, int d) {
//     Node* temp = new Node(d);
//     temp->next = head;
//     if (head != NULL) {
//         head->prev = temp;
//     }
//     head = temp;
// }


void insertAtTail(Node* &tail, int d) {
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}


int main()
{
    Node* node1 = new Node(5);
    // cout<<node1->data<<endl;

    Node* head = node1;
    Node* tail = node1;
    // print(head);
   // cout<<endl;
   // cout<<"the length of the linked list is "<<getLength(head);

    insertAtHead(head,10);
    insertAtHead(head,20);
    //print(head);


    insertAtTail(tail,100);
    insertAtTail(tail,200);
    print(head);



    return 0;
}