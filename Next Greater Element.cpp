// Next Greater Element

#include <bits/stdc++.h>
vector<int> nextGreaterElement(vector<int>& arr, int n)
{
	// Write your code here
	stack<int> s;
    s.push(INT_MAX);
    vector<int> ans(n);
    for(int i=n-1; i>=0; i--){
        while(s.top() <= arr[i]){
            s.pop();
        }
        ans[i] = s.top();
        s.push(arr[i]);
    }
	for(int i=0; i<n; i++){
		if(ans[i] == INT_MAX){
			ans[i] = -1;
		}
	}
    return ans;
}
