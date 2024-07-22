// Array partition with minimum difference

#include<bits/stdc++.h>

int minSubsetSumDifference(vector<int>& arr, int n){
    int totalSum = 0;
    for(int i=0;i<n;i++){
		totalSum+=arr[i];
	} 
    vector<vector<bool>>dp(n,vector<bool>((totalSum+1)/2+1,false));
    for(int i=0;i<n;i++){
		dp[i][0]=1; 
	}
    if((totalSum+1)/2>=arr[0]) dp[0][arr[0]]=true;
    for(int i=1;i<n;i++){
        for(int target=1;target<=(totalSum+1)/2;target++){
            bool notTake=dp[i-1][target];
            bool take=false;
            if(target>=arr[i]) take=dp[i-1][target-arr[i]];
            dp[i][target] = take || notTake;
        }
    }
    int mini=INT_MAX;
    for(int s1=0;s1<=totalSum/2;s1++){
        if (dp[n-1][s1]==true){
            mini=min(mini, abs((totalSum-s1)-s1));
        }
    }
    return mini;
}
