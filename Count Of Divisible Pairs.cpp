// Count Of Divisible Pairs

#include <bits/stdc++.h> 

int countOfDivisiblePairs(int n, int m){
	// Write your code here
	int cnt=0;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			int sum = i+j;
			if((sum%5) == 0){
				cnt++;
			}
		}
	}
	return cnt;
}
