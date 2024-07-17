// Reverse Linked List

/****************************************************************

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
        

*****************************************************************/

Node* reverseLinkedList(Node *head)
{
    // Write your code here
    if(head == NULL || head->next == NULL){
        return head;
    }
    
    Node* cur = head;
    Node* prev = NULL;

    while(cur != NULL){
        Node* forward = cur->next;
        cur->next = prev;
        prev = cur;
        cur = forward;
    }
    return prev;
}
