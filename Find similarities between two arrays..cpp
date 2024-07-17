// Find similarities between two arrays.

#include <bits/stdc++.h> 
pair < int , int > findSimilarity(vector < int > arr1, vector < int > arr2, int n, int m) 
{
	// Write Your Code here.       
	pair<int, int> ans;
	int c1=1;
	int c2=0;
	for(int i=0; i<m; i++){
		arr1.push_back(arr2[i]);
	}
	sort(arr1.begin(), arr1.end());
	for(int i=0; i<(n+m-1); i++){
		if(arr1[i] != arr1[i+1]){
			c1++;
		}
		if(arr1[i] == arr1[i+1]){
			c2++;
		}
	}
	ans.first = c2;
	ans.second = c1;
	return ans;
}
