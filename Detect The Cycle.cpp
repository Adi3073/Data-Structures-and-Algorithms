// Detect The Cycle

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

bool detectCycle(Node *head){
	//	Write your code here.
	if(head == NULL || head->next == NULL){
		return false;
	}

	Node* slow = head;
	Node* fast = head;

	while(slow != NULL && fast != NULL){
		fast = fast->next;
		if(fast != NULL){
			fast = fast->next;
		}
		slow = slow->next;

		if(slow == fast){
			return true;
		}
	}

	return false;
}
