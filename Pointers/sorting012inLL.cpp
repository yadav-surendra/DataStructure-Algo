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


Node* sorting(Node* head)
{
    Node* temp = head;
    int zeroCnt = 0;
    int oneCnt = 0;
    int twoCnt = 0;

    while(temp != NULL)
    {
        if(temp->data == 0)
        zeroCnt++;

        else if(temp->data == 1)
        oneCnt++;
        
        else if (temp->data == 2)
        twoCnt++;

        temp = temp->next;
    }

    //putting the values in sorted order
    temp = head;
    while(temp != NULL){
        if(zeroCnt > 0)
        {
            temp->data = 0;
            zeroCnt--;
        }
        else if(oneCnt > 0)
        {
            temp->data = 1;
            oneCnt--;
        }
        else if(twoCnt > 0)
        {
            temp->data = 2;
            twoCnt--;
        }

    temp = temp->next;

    }
    return head;
}

int main(){
    Node* head = NULL;

    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtHead(head,0);

    print(head);

    sorting(head);
    print(head);
    return 0;
}