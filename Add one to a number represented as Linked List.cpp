// Add one to a number represented as Linked List

/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/
Node* reverse(Node* head){
    Node* curr = head;
    Node* next1 = NULL;
    Node* prev = NULL;

    while(curr){
        next1 = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next1;
    }
    return prev;
}

void insertAtTail(Node* &ansHead, Node* &ansTail, int val){
    Node* temp = new Node(val);
    if(!ansHead){
        ansHead = temp;
        ansTail = temp;
        return;
    }
    else{
        ansTail->next = temp;
        ansTail = temp;
    }
}

Node* add(Node* first, Node* second){
    int carry = 0;
    
    Node* ansHead = NULL;
    Node* ansTail = NULL;

    while(first || second || carry != 0){
        int val1 = 0;
        if(first){
            val1 = first->data;
        }
        int val2 = 0;
        if(second){
            val2 = second->data;
        }
        int sum = carry + val2 + val1;
        int digit = sum%10;

        insertAtTail(ansHead, ansTail, digit);

        carry = sum/10;

        if(first){
            first = first->next;
        }
        if(second){
            second = second->next;
        }
    }
    return ansHead;
}

Node *addOne(Node *head)
{
    // Write Your Code Here.
    head = reverse(head);
    Node* one = new Node(1);
    
    Node* ans = add(head, one);

    ans = reverse(ans);
    return ans;
}
