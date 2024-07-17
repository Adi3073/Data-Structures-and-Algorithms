// Delete Alternate Nodes


/*********************************************************
 
    // Following is the Node structure

    class Node {
    public:
        int data;
        Node * next;
        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }
    
        ~Node() {
            if(next) {
                delete next;
            }
        }
    };

*********************************************************/

void deleteAlternateNodes(Node *head) {
    //Write your code here
    if(head == NULL || head->next == NULL){
        return;
    }

    Node* temp = head;
    while(temp){
        Node* prev = temp;
        Node* curr = temp->next;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
        temp = temp->next;
    }
}
