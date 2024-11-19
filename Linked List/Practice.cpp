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

void createLoop(Node* head){
    Node* temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = head->next;
}

Node* floydDetectLoop(Node* head) {

    if(head == NULL)
        return NULL;

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast !=NULL) {
        
        fast = fast -> next;
        if(fast != NULL) {
            fast = fast -> next;
        }

        slow = slow -> next;

        if(slow == fast) {
            cout<<"Loop is present"<<endl;
            return slow;
            
        }
    }
    cout<<"Loop is not present"<<endl;
    return NULL;

}

Node* getStartingNode(Node* head) {

    if(head == NULL) 
        return NULL;

    Node* intersection = floydDetectLoop(head);
    
    if(intersection == NULL)
        return NULL;
    
    Node* slow = head;

    while(slow != intersection) {
        slow = slow -> next;
        intersection = intersection -> next;
    }  

    return slow;

}

Node *removeLoop(Node *head)
{
    if( head == NULL)
        return NULL;

    Node* startOfLoop = getStartingNode(head);
    
    if(startOfLoop == NULL)
        return head;
    
    Node* temp = startOfLoop;

    while(temp -> next != startOfLoop) {
        temp = temp -> next;
    } 

    temp -> next = NULL;
    cout<<"Loop is removed."<<endl;
    return head;
}


int main()
{
    Node* head = NULL;

    insertAtHead(head,5);
    insertAtHead(head,10);
    insertAtHead(head,15);
    insertAtHead(head,20);
    insertAtHead(head,25);

    createLoop(head);
    cout<<head->data<<endl;

    // bool isLoop = detectLoop(head);
    // if(isLoop)
    // {
    //     cout<<"Loop is present."<<endl;
    // }
    // else{
    //     cout<<"No loop is present."<<endl;
    // }

    Node* startingOfLoop = getStartingNode(head);
    cout<<"Loop starts at "<<startingOfLoop->data;

    removeLoop(head);
    

    return 0;
}