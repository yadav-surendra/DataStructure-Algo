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

// first approach
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

// second approach
/********************************
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

********************************/
void insertAtTail(Node* &tail, Node* curr ) {
    tail -> next = curr;
    tail = curr;
}


Node* sortList(Node *head)
{
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;
    
    Node* curr = head;
    
    // create separate list 0s, 1s and 2s
    while(curr != NULL) {
        
        int value = curr -> data;
        
        if(value == 0) {
            insertAtTail(zeroTail, curr);
        }
        else if(value == 1) {
            insertAtTail(oneTail, curr);
        }
        else if(value == 2) {
            insertAtTail(twoTail, curr);
        }       
        curr = curr -> next;
    }
    
    //merge 3 sublist
    
    // 1s list not empty
    if(oneHead -> next != NULL) {
        zeroTail -> next = oneHead -> next;
    }
    else {
        //1s list -> empty
        zeroTail -> next = twoHead -> next;
    }
    
    oneTail -> next = twoHead -> next;
    twoTail -> next = NULL;
    
	//setup head 
    head = zeroHead -> next;
    
    //delete dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;
    
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