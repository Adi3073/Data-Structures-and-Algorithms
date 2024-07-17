// Set Matrix Zeros

#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int n=matrix.size();
	int m=matrix[0].size();
	vector<int> row(m,0);
	vector<int> col(n,0);

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(matrix[i][j] == 0){
				row[j]=1;
				col[i]=1;
			}
		}
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(row[j] == 1 || col[i] == 1){
				matrix[i][j]=0;
			}
		}
	}

}
