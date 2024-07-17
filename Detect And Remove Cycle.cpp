// Detect And Remove Cycle

#include <bits/stdc++.h> 
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
bool detectAndRemoveCycle(Node* head)
{
    Node* slow = head;
    Node* fast = head;


    while(fast -> next && fast -> next -> next){
        fast = fast -> next -> next;
        slow = slow -> next;


        if(slow == fast){
            slow = head;


            while(slow != fast){
                slow = slow -> next;
                fast = fast -> next;
            }


            while(slow-> next != fast){
                slow = slow-> next;
            }
            slow -> next = NULL;
            return true;
        }
    }
    return false;
}
