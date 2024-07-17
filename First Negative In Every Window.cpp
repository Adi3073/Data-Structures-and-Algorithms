// First Negative In Every Window

#include <bits/stdc++.h>
vector<int> firstNegative(vector<int> arr, int n, int k) {
	// Write your code here.
	deque<int> dq;
	vector<int> v;

	for(int i=0; i<k; i++){
		if(arr[i] < 0){
			dq.push_back(i);
		}
	}

	if(!dq.empty()){
		v.push_back(arr[dq.front()]);
	}
	else{
		v.push_back(0);
	}

	for(int i=k; i<n; i++){
		if(!dq.empty() && i - dq.front() >= k){
			dq.pop_front();
		}

		if(arr[i] < 0){
			dq.push_back(i);
		}
		if(!dq.empty()){
			v.push_back(arr[dq.front()]);
		}
		else{
			v.push_back(0);
		}
	}
	return v;
}
