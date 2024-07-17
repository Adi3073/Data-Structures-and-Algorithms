// Add Two Numbers As Linked Lists ll

#include <bits/stdc++.h> 
/************************************************************

    Following is the linked list node structure:
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }
    };

************************************************************/
Node<int>* reverse(Node<int>* head){
    Node<int>* curr = head;
    Node<int>* prev = NULL;
    Node<int>* next1 = NULL;

    while(curr){
        next1 = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next1;
    }
    return prev;
}

void insertAtTail(Node<int>* &ansHead, Node<int>* &ansTail, int val){
    Node<int>* temp = new Node<int>(val);
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

Node<int>* add(Node<int>* first, Node<int>* second){
    int carry = 0;
    
    Node<int>* ansHead = NULL;
    Node<int>* ansTail = NULL;

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

Node<int>* addTwoLists(Node<int>* first, Node<int>* second) {
    // Write your code here.
    first = reverse(first);
    second = reverse(second);

    Node<int>* ans = add(first, second);

    ans = reverse(ans);

    return ans;
}
