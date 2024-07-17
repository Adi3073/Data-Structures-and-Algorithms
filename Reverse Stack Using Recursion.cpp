// Reverse Stack Using Recursion

void pushAtBottom(stack<int> &s, int x){
    if(s.empty()){
        s.push(x);
        return;
    }

    int a = s.top();
    s.pop();
    pushAtBottom(s, x);
    s.push(a);
}

void reverseStack(stack<int> &stack) {
    // Write your code here
    if(stack.empty()){
        return;
    }
    int a = stack.top();
    stack.pop();
    reverseStack(stack);
    pushAtBottom(stack, a);
}
