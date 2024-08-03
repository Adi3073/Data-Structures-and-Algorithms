// Set Matrix Ones

#include <bits/stdc++.h> 
void setMatrixOnes(vector<vector<int>> &MAT, int n, int m)
{
    // Write your code here.
    int col1=MAT[0][0];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(MAT[i][j] == 1){
                MAT[i][0] = 1;
                if(j != 0){
                    MAT[0][j] = 1;
                }
                else{
                    col1 = 1;
                }
            }
        }
    }

    for(int i=1; i<n; i++){
        for(int j=1; j<m; j++){
            if(MAT[i][j] != 1){
                if(MAT[i][0] == 1 || MAT[0][j]){
                    MAT[i][j] = 1;
                }
            }
        }
    }

    if(MAT[0][0] == 1){
        for(int j=0; j<m; j++){
            MAT[0][j] = 1;
        }
    }

    if(col1 == 1){
        for(int i=0; i<n; i++){
            MAT[i][0] = 1;
        }
    }
}
