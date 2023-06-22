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
Node *removeKthNode(Node *head, int K)
{
    // Write your code here.
    Node *temp = head;
    while (K)
    {
        temp = temp->next;
        K--;
    }
    Node *current = head;
    Node *prev = NULL;
    while (temp)
    {
        prev = current;
        current = current->next;
        temp = temp->next;
    }
    if (prev == NULL)
    {
        current = head->next;
        delete head;
        return current;
    }
    prev->next = current->next;
    delete current;
    return head;
}
