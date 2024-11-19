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

// Node* removeDuplicateNode(Node *head)
// {
//     if(head == NULL)
//     {
//         return NULL;
//     }


//     Node *curr = head;

//     while (curr != NULL && curr->next != NULL)
//     {
//         if (curr->data == curr->next->data)
//         {
//             Node* next_next = curr->next->next;
//             Node* nodeToDelete = curr->next;
//             delete nodeToDelete;
//             curr->next = next_next;
//         }
//         else{
//             curr = curr->next;
//         }
//     }
//     return head;
// }

Node * uniqueSortedList(Node * head) {
   	//empty List
    if(head == NULL)
        return NULL;
    
    //non empty list
    Node* curr = head;
    
    while(curr != NULL) {
        
        if( (curr -> next != NULL) && curr -> data == curr -> next -> data) {

            Node* next_next = curr ->next -> next;
            Node* nodeToDelete = curr -> next;
            delete(nodeToDelete);
            curr -> next = next_next;
            
        }
        else //not equal
        {
            curr = curr -> next;
        }   
    }
    
    return head; 
}

int main()
{
    Node* head = NULL;
    insertAtHead(head,5);
    
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,2);
    insertAtHead(head,1);
    print(head);

    uniqueSortedList(head);

    print(head);

    return 0;
}