// Sort linked list of 0s 1s 2s

/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* sortList(Node *head){
    // Write your code here.
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* temp = head;
    int a[3]={0};
    while(temp != NULL){
        int val = temp->data;
        a[val]++;
        temp = temp->next;
    }

    temp = head;
    for(int i=0; i<3; i++){
        int c=a[i];
        while(c>0){
            temp->data = i;
            temp =  temp->next;
            c--;
        }
    }
    return head;
}
