// Reversing Queue

#include <bits/stdc++.h> 
void reverse(queue < int > & q) {
    // Write your code here.
    stack<int> v;
    int n = q.size();
    while(!q.empty()){
        int a = q.front();
        q.pop();
        v.push(a);
    }
    while(!v.empty()){
        int b = v.top();
        v.pop();
        q.push(b);
    }
}
