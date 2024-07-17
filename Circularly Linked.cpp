// Circularly Linked

#include <bits/stdc++.h> 
/*************************************************
        Following is the structure of class Node:
     
        class Node{
        public:
            int data;
            Node* next;
            
            Node(int data){
                this->data = data;
                this->next = NULL;
            }
            
        }
**************************************************/

bool isCircular(Node* head){
    // Write your code here.   
     Node *temp=head;
    if(head==NULL){
        return true;
    }

    while(temp!=NULL){
        if(temp->data==INT_MAX){
            return false;
        }
        if(temp->next==head){
            return true;
        }
        temp->data=INT_MAX;
        temp=temp->next;
}

     return false;
}

