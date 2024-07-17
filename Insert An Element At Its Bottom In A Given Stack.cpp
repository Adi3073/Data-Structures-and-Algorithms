// Insert An Element At Its Bottom In A Given Stack

#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    vector<int> a;
    while(!myStack.empty()){
        a.push_back(myStack.top());
        myStack.pop();
    }
    myStack.push(x);
    int i = a.size()-1;
    while(i>=0){
        myStack.push(a[i]);
        i--;
    }
    return myStack;
}
