// Reverse First K elements of Queue

#include <bits/stdc++.h> 
void reverse(queue<int> &q, int k, int c){
    if(c == k){
        return;
    }
    int b = q.front();
    q.pop();
    reverse(q, k, c+1);
    q.push(b);
}
queue<int> reverseElements(queue<int> q, int k)
{
    // Write your code here.
    int n = q.size();
    int c=0;
    reverse(q, k, c);
    for(int i=0; i<(n-k); i++){
        int a = q.front();
        q.pop();
        q.push(a);
    }
    return q;
}
