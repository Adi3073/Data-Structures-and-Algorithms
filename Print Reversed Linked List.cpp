// Print Reversed Linked List

/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

void printReverse(Node *head)
{
    //Write your code here
	if(head == NULL){
		cout<<" ";
	}
	else{
		
		Node* tail = head;
		while(tail->next != NULL){
			tail = tail->next;
		}
		while(tail != head){
			Node* curr = head;
			Node* prev = NULL;
			while(curr != tail){
				prev = curr;
				curr = curr->next;
			}
			tail = prev;
			cout<<curr->data<<" ";
		}
		cout<<head->data;
	}
}
