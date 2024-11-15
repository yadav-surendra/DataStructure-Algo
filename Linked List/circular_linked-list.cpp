// for more information and notes on circuklar linked list, visit this website: https://www.geeksforgeeks.org/circular-linked-list/

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;


    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this-> data;

        if(this->next != NULL)
        {
            delete next;
            next = NULL;
            cout<<"THe node with value "<<value<<" is deleted."<<endl;
        }
    }

};

void print(Node* &tail)
{
    Node* temp =tail;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insert(Node* &tail, int element, int d)
{

    //empty list
    if(tail == NULL)
    {
        Node* temp = new Node(d);
        tail = temp;
        temp->next = temp;
    }
    else
    {
        // non empty list
        Node* curr = tail;
        bool found = false;

        do{
            if(curr->data == element)
            {
                found = true;
                break;
            }
            curr = curr->next;

        }while(curr != tail);

        // insert the node after the found node.
       
        if(found)
        {
            Node* temp = new Node(d);

            temp->next = curr->next;
            curr-> next = temp;
        }
        else{
            // this is the case when the element is not found.
            // so insert the node at the end.
            Node* temp = new Node(d);
            temp->next = tail->next;
            tail->next = temp;
        }
 
    }
}

int main()
{
    Node* node1 = new Node(4);
    Node* tail = node1;

    insert(tail,4,10);
    print(tail);
    insert(tail,4,20);
    // print(tail);
    // insert(tail,10,25);
     print(tail);
    cout<<tail->data<<endl;
    
    return 0;
}