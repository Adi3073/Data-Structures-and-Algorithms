// Day 22 : Merge In Between

/****************************************************************

Following is the class structure of the Node class:

class LinkedListNode 
{
    public:
    int data;
    LinkedListNode* next;

    LinkedListNode(int data) 
    {
        this->data = data;
        this->next = NULL;
    }
};

*****************************************************************/

LinkedListNode* mergeInBetween(int x, int y, LinkedListNode *head1, LinkedListNode *head2) 
{
    // Write your code here.
    if(head1 == NULL){
        return head1;
    }
    if(head2 == NULL){
        return head2;
    }
    LinkedListNode* tail2 = head2;
    while(tail2->next != NULL){
        tail2 = tail2->next;
    }
    int c = 1;
    LinkedListNode* temp = head1;
    while(c<=y){
        temp = temp->next;
        c++;
    }
    LinkedListNode* temp1 = temp->next;
    temp->next = NULL;

    temp = head1;
    c = 1;
    while(c<x){
        temp = temp->next;
        c++;
    }
    temp->next = head2;
    tail2->next = temp1;

    return head1;
}
