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
    
    while(temp->next != NULL)
    {
        Node* curr = temp;

        while(curr != NULL)
        {
            if((curr->next != NULL) && temp->data == curr->next->data)
            {
                Node* next_next = curr->next->next;
                Node* nodeToDelete = curr->next;
                delete nodeToDelete;
                curr->next = next_next;
            }
            else{
                curr = curr->next;
            }
        }
        temp = temp->next;
    }
    return head;
}

int main()
{
    Node* head = NULL;
    insertAtHead(head,15);
    insertAtHead(head,2);
    insertAtHead(head,4);
    insertAtHead(head,5);
    insertAtHead(head,2);
    insertAtHead(head,4);
    insertAtHead(head,10);

    print(head);
    cout<<head->data<<endl;

    Node* curr = head;
    //cout<<curr->next->data;

    removeDuplicates(head);
    print(head);

    return 0;
}