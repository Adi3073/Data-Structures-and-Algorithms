// Distribute N candies among K people

#include <bits/stdc++.h> 
vector<int> candies(int n, int k)
{
	// Write your code here
	int i=0;
    int j=1;
    vector<int>ans (k,0);

    while(n>0){
        ans[i%k] += min(n,j);
        n=n-j;
        j++;
        i++;
    }
    return ans;
}
