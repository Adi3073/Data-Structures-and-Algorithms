// Sorting the stack recursively

#include <bits/stdc++.h> 
void sortedInsert(stack<int> &s, int num){
	if(s.empty() || (!s.empty() && s.top() < num)){
		s.push(num);
		return;
	}

	int n = s.top();
	s.pop();

	sortedInsert(s, num);
	s.push(n);
}

void sort(stack<int> &s){
	if(s.empty()){
		return ;
	}

	int num = s.top();
	s.pop();

	sort(s);

	sortedInsert(s, num);
}

stack<int> sortStack(stack<int> &s)
{
	// Write code here.
	sort(s);
	return s;
}
