// Find nth elements of spiral matrix

#include <bits/stdc++.h> 
int findKthElement(vector<vector<int>> matrix, int k) {
    // Write your code here.
    vector<int> ans;
    int count = 0;
    int n = matrix.size();
    int m = matrix[0].size();
    int total = n*m;

    int SR = 0;
    int SC = 0;
    int ER = n-1;
    int EC = m-1;

    while(count < total){
        for(int i=SC; count < total && i<=EC; i++){
            ans.push_back(matrix[SR][i]);
            count++;
        }
        SR++;

        for(int i=SR; count < total && i<=ER; i++){
            ans.push_back(matrix[i][EC]);
            count++;
        }
        EC--;

        for(int i=EC; count < total && i>=SC; i--){
            ans.push_back(matrix[ER][i]);
            count++;
        }
        ER--;

        for(int i=ER; count < total && i>=SR; i--){
            ans.push_back(matrix[i][SC]);
            count++;
        }
        SC++;
    }
    return ans[k-1];
}
