// Move Last Element

#include <bits/stdc++.h> 
/****************************************************************
Following is the Linked list node structure already written

template <typename T>
class LinkedListNode
{
public:
    T data;
    LinkedListNode<T>* next;
    LinkedListNode(T data)
    { 
        this->data = data;
        next = NULL;
    }
};
*****************************************************************/


LinkedListNode<int>* moveToFront(LinkedListNode<int> *head) {

    /*
     Don't write main().
     Don't read input, it is passed as function argument.
     Write your code here.
    */
    if(head->next == NULL) return head;
    
    LinkedListNode<int>* temp = head;
    LinkedListNode<int>* temp1 = NULL;
    while(temp->next){
        temp1 = temp;
        temp = temp->next;
    }
    temp->next = head;
    temp1->next = NULL;
    head = temp;
    return head;
}
