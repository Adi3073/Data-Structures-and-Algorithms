// Guess Price

#include <bits/stdc++.h> 
/*
Structure of the Node of the BST is :

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val) 
    {
        data = val;
        left = right = NULL;
    }
};
*/

int findPrice(Node* root)
{
    // Write your code here.
    int ans=0;
    Node* temp = root;
    if(temp->left){
        while(temp->left){
            temp = temp->left;
        }
        ans=temp->data;
    }
    else{
        ans = temp->data;
    }
    return ans;
}
