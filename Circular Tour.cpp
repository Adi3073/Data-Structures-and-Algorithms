// Circular Tour

#include <bits/stdc++.h> 
int firstCircularTour(vector<int>& petrol, vector<int>& distance, int N)
{
	// write your code here
	long long int deficit=0;
	long long int start=0;
	long long int balance=0;
	
	for(int i=0; i<N; i++){
		balance += petrol[i] - distance[i];
		
		if(balance < 0){
			start = i+1;
			deficit += balance;
			balance = 0;
		}
	}
	if((deficit + balance) >= 0){
		return start;
	}
	return -1;
}
