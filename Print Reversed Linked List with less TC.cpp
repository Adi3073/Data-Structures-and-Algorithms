// Print Reversed Linked List with less TC

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

void printReverse(Node *head)
{
    //Write your code here
	if(head == NULL){
		cout<<" ";
	}
	else{
		Node* temp = head;
		vector<int> ans;
		while(temp != NULL){
			ans.push_back(temp->data);
			temp = temp->next;
		}
		for(int i=ans.size()-1; i>=0; i--){
			cout<<ans[i]<<" ";
		}
	}
}
