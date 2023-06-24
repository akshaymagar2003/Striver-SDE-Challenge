/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* removeKthNode(Node* head, int k)
{
       Node* fast = head;
    Node* slow = head;
    Node* prev = nullptr;

    for (int i = 0; i < k; i++) {
        if (fast == nullptr) {
         
            return head;
        }
        fast = fast->next;
    }

    while (fast != nullptr) {
        prev = slow;
        slow = slow->next;
        fast = fast->next;
    }

    if (prev != nullptr) {
        prev->next = slow->next;
    } else {
        head = head->next;
    }

    delete slow; 

    return head;
}
