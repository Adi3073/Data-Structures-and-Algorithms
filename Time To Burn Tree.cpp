// Time To Burn Tree

#include <bits/stdc++.h>
/************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
        public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) 
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
BinaryTreeNode<int>* Parent(BinaryTreeNode<int>* root, int start, map<BinaryTreeNode<int>*, BinaryTreeNode<int>*> &nodetoparent){
    BinaryTreeNode<int>* res = NULL;
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    nodetoparent[root] = NULL;

    while(!q.empty()){
        BinaryTreeNode<int>* front = q.front();
        q.pop();

        if(front->data == start){
            res = front;
        }

        if(front->left){
            nodetoparent[front->left] = front;
            q.push(front->left);
        }

        if(front->right){
            nodetoparent[front->right] = front;
            q.push(front->right);
        }
    }
    return res;
}

int burn(BinaryTreeNode<int>* root, map<BinaryTreeNode<int>*, BinaryTreeNode<int>*> nodetoparent){
   
    map<BinaryTreeNode<int>*, bool> visited;
    queue<BinaryTreeNode<int>*> q;

    q.push(root);
    visited[root] = true;

    int ans=0;
    while(!q.empty()){

        bool flag = 0;
        int size = q.size();
        for(int i=0; i<size; i++){
            BinaryTreeNode<int>* front = q.front();
            q.pop();

            if(front->left && !visited[front->left]){
                flag=1;
                visited[front->left] = 1;
                q.push(front->left);
            }

            if(front->right && !visited[front->right]){
                flag=1;
                visited[front->right] = 1;
                q.push(front->right);
            }

            if(nodetoparent[front] && !visited[nodetoparent[front]]){
                flag=1;
                visited[nodetoparent[front]] = 1;
                q.push(nodetoparent[front]);
            }
        }
        if(flag == 1){
            ans++;
        }
    }
    return ans;
}
int timeToBurnTree(BinaryTreeNode<int>* root, int start)
{
    // Write your code here
    map<BinaryTreeNode<int>*, BinaryTreeNode<int>*> nodetoparent;
    BinaryTreeNode<int>* N = Parent(root, start, nodetoparent);
    int ans = burn(N, nodetoparent);
    return ans;

}
