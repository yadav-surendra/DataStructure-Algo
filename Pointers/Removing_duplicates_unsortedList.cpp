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
        cout << "deleting " << value << endl;
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

// Node* removeDuplicates(Node* head)
// {
//     if(head == NULL)
//     {
//         return NULL;
//     }

//     Node* temp = head;
    
//     while(temp != NULL)
//     {
//         Node* forward = temp->next;

//         while(forward != NULL)
//         {
//             if( forward->next != NULL && temp->data == forward->next->data)
//             {
//                 Node* next_next = forward->next->next;
//                 Node* toDelete = forward->next;
//                 delete toDelete;
//                 forward->next = next_next;
//             }
//             else{
//                 forward = forward->next;
//             }
//         }

//         temp = temp->next;
//     }
// }

Node* removeDuplicates(Node* head)
{
    if(head == NULL)
    {
        return NULL;
    }

    Node* temp = head;
    
    while(temp != NULL)
    {
        Node* prev = temp;
        Node* forward = temp->next;

        while(forward != NULL)
        {
            if(temp->data == forward->data)
            {
                Node* toDelete = forward;
                prev->next = forward->next; // Skip the duplicate node
                forward = forward->next; // Move forward pointer
                delete toDelete; // Free memory
            }
            else
            {
                prev = forward; // Move prev to the current forward
                forward = forward->next; // Move forward pointer
            }
        }

        temp = temp->next; // Move to the next node
    }

    return head;
}

int main()
{
    Node* head = NULL;
    insertAtHead(head,15);
    insertAtHead(head,12);
    insertAtHead(head,12);
    insertAtHead(head,2);
    insertAtHead(head,2);
    insertAtHead(head,4);
    insertAtHead(head,5);
    insertAtHead(head,2);
    insertAtHead(head,4);
    insertAtHead(head,10);

    print(head);
    cout<<head->data<<endl;

    removeDuplicates(head);
    print(head);

    return 0;
}