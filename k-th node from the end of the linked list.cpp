//k-th node from the end of the linked list

#include <bits/stdc++.h> 
/*

Following is the Node Structure written below
 
class node
{
	public:
	int data;
    node * next;
	node(int x)
	{
		data=x;
		next=NULL;
	}
};
*/

node *findKthFromLast(node *head, int k)
{
	//Write your Code Here
	node* temp = head;
	int cnt=1;
	while(temp->next != NULL){
		cnt++;
		temp = temp->next;
	}
	int n = cnt-k+1;
	temp = head;
	int c=1;
	while(c != n){
		c++;
		temp = temp->next;
	}
	return temp;
}
