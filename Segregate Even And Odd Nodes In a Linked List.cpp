// Segregate Even And Odd Nodes In a Linked List

/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 *		Node() : data(0), next(nullptr) {};
 *		Node(int x) : data(x), next(nullptr) {}
 *		Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node* segregateEvenOdd(Node* head)
{
    // Write your code here
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* temp = head;
    vector<int> a;
    while(temp){
        a.push_back(temp->data);
        temp = temp->next;
    }
    vector<int> even;
    vector<int> odd;
    for(int i=0; i<a.size(); i++){
        if(a[i]&1){
            odd.push_back(a[i]);
        }
        else{
            even.push_back(a[i]);
        }
    }
    for(int i=0; i<odd.size(); i++){
        even.push_back(odd[i]);
    }

    int i=0;
    temp = head;
    while(temp){
        temp->data = even[i];
        i++;
        temp = temp->next;
    }

    return head;
}
