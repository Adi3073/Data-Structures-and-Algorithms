// Check If Linked List Is Palindrome

/****************************************************************

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

*****************************************************************/

bool isPalindrome(Node *head)
{
    // write your code here
    Node* n1=head;
    vector<int> arr;
    while(n1 != nullptr){
        arr.push_back(n1->data);
        n1 = n1->next;
    }
    int i=0;
    int j = arr.size()-1;
    bool ans;
    while(i<j){
        if(arr[i] == arr[j]){
            ans = true;
            i++;
            j--;
        }
        else{
            ans = false;
            break;
        }
    }
    return ans;
}
