// Min Stack

#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	// Write your code here.
	stack<int> s;
    int mini;
	
	public:
		
		// Constructor
		minStack() 
		{ 
			// Write your code here.
			mini = -1;
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			// Write your code here.
			if(s.empty()){
				s.push(num);
				mini = num;
			}
			else{
				if(num < mini){
					s.push(2*num - mini);
					mini = num;
				}
				else{
					s.push(num);
				}
			}
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			// Write your code here.
			if(s.empty()){
				return -1;
			}
			else{
				int curr = s.top();
				s.pop();
				if(curr > mini){
					return curr;
				}
				else{
					int val = mini;
                    mini = (2*mini) - curr;
                    return val;
				}
			}
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			// Write your code here.
	        if(s.empty()){
				return -1;
			}
			int curr = s.top();
			if(curr < mini){
				return mini;
			}
			else{
				return curr;
			}
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			// Write your code here.
			if(s.empty()){
				return -1;
			}
			return mini;
		}
};
