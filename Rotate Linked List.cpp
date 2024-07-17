// Rotate Linked List

/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *rotate(Node *head, int k) {
     // Write your code here.
     if(head == nullptr || head->next == nullptr || k == 0){
          return head;
     }
     Node* tail = head;
     while(tail->next != nullptr){
          tail = tail->next;
     }
     Node* temp = head;
     int c=1;
     while(temp->next != nullptr){
          temp = temp->next;
          c++;
     }
     while(k>c){
          k=k-c;
     }
     if(k==c){
          return head;
     }
     temp = head;
     int c1 = 1;

     while(c1<(c-k)){
          temp = temp->next;
          c1++;
     }
     Node* first = temp->next;
     temp->next = nullptr;
     tail->next = head;
     head = first;

     return head;
}
