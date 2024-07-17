// Remove duplicates from a sorted Doubly Linked List

/**
 * Definition of doubly linked list:
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this->data = data;
 *          this->prev = prev;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node * removeDuplicates(Node *head)
{
    // Write your code here
    if (head == NULL || head->next == NULL) {
        return head;
    }
    
    Node* temp = head;
    while(temp->next->next != NULL){
        Node* curr = temp->next;
        Node* pre = temp;
        
        if(pre->data == curr->data){
            pre->next = curr->next;
            curr->next->prev = pre;
            curr->prev = NULL;
            curr->next  = NULL;
            delete curr;
        }
        else{
            temp = temp->next;
        }
    }
    Node* tail = head;
    while(tail->next->next != NULL){
        tail = tail->next;
    }
    if(tail->data == tail->next->data){
        Node* temp = tail->next;
        tail->next = NULL;
        delete temp;
    }
    return head;
}
