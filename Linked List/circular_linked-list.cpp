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
    Node* temp = new Node(d);

    if(tail == NULL)
    {
        tail = temp;
        temp->next = temp;
    }
    else
    {
        temp->next = tail;
        tail->next = temp;
    }
}

int main()
{
    Node* node1 = new Node(4);
    Node* tail = node1;

    insert(tail,10,10);

    print(tail);
    return 0;
}