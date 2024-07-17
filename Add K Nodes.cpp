// Add K Nodes

#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

    class Node{
    public:
        int data;
        Node *next;
        Node(int data){
            
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

Node *getListAfterAddingNodes(Node *head, int k){
    //	Write your code here.
    int sum = 0;
    int cnt = 0;
    Node* temp = head;

    while(temp){
        sum = sum + temp->data;
        cnt++;
        if(cnt == k){
            Node* newNode = new Node(sum);
            newNode->next = temp->next;
            temp->next = newNode;
            temp = newNode;
            sum = 0;
            cnt = 0;
        }
        if(temp->next == NULL && cnt<k && cnt>0){
            Node* newNode = new Node(sum);
            newNode->next = temp->next;
            temp->next = newNode;
            temp = newNode;
        }
        temp = temp->next;
    }
    return head;
}
