// Interleave The First Half Of The Queue With The Second Half

#include <bits/stdc++.h> 
void interLeaveQueue(queue < int > & q) {
    // Write your code here.
    int n = q.size();
    queue<int> a;
    queue<int> b;
    for(int i=0; i<n/2; i++){
        int r = q.front();
        q.pop();
        a.push(r);
    }
    for(int i=0; i<n/2; i++){
        int r = q.front();
        q.pop();
        b.push(r);
    }
    while(!a.empty() && !b.empty()){
        int t = a.front();
        a.pop();
        q.push(t);
        int y = b.front();
        b.pop();
        q.push(y);
    }
}
