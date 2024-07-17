// Reverse List In K Groups

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
 Node* Reverse(Node* head, int k) {
    // Write your code here.
    if(head == nullptr){
        return nullptr;
    }

    Node* nxt =  nullptr;
    Node* curr = head;
    Node* prev = nullptr;
    int count = 0;
    
    while(curr != nullptr && count<k){
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
        count++;
    }

    if(nxt != nullptr){
        head->next = Reverse(nxt, k);
    }

    return prev;
}

Node* kReverse(Node* head, int k) {
    // Write your code here.
    Node* temp = head;
    int c=1;
    while(temp->next != nullptr){
        temp = temp->next;
        c++;
    }
    int ct = c-(c%k);
    temp = head;
    c=1;
    while(c!=ct){
        temp = temp->next;
        c++;
    }
    Node* temp1 = temp->next;
    temp->next = nullptr;
    Node* ans = Reverse(head, k);
    temp = ans;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = temp1;
    return ans;
}
