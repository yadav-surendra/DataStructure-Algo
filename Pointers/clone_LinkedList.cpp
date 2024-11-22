
class solution {
    private:
    void insertAtTail(Node* &head, Node* &tail, int d)
    {
        Node* temp = new Node(d);
        if(head == NULL)
        {
            head = temp;
            tail = temp;
            return;
        }
        else{
            tail->next = temp;
            tail = temp;
        }
        
    } 

    public:
    Node* copyList(NOde *head)
    {
        //step1: create a clone list
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;

        Node* temp = head;

        while(temp != NULL)
        {
            insertAtTail(cloneHead,cloneTail,temp->data);
            temp = temp->next;
        }

        //create a map
        unordered_map<Node* , Node*> oldToNewNode;

        Node* originalNode = head;
        Node* cloneNode = clonehead;

        while(originalNode != NULL && cloneNode != NULL)
        {
            oldToNewNode [originalNode] = cloneNode;
            originalNode = originalNode -> next;
            cloneNode = cloneNode -> next;
        }

        originalNode = head;
        cloneNode = clonehead;

        while(originalNode != NULL)
        {
            cloneNode -> random = oldToNewNode[originalNode -> random];
            originalNode = originalNode->next;
            cloneNode = cloneNode -> next;
        }
        return cloneHead;
    }
};