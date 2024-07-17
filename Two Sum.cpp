// Two Sum

#include<bits/stdc++.h>
vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
	// Write your code here. 
	vector<pair<int,int>>a;
	sort(arr.begin(),arr.end());
	int s=0,e=arr.size()-1;
	while(s<e){
		if(arr[s]+arr[e]<target){
			s++;
		}
		else if(arr[s]+arr[e]>target){
			e--;
		}
		else if(arr[s]+arr[e]==target){
			a.push_back({arr[s],arr[e]});
			s++;
			e--;
		}
	}
	if(a.size()==0){
		a.push_back({-1,-1});
	}
	return a;

}
