//Minimum Cost

#include <bits/stdc++.h> 
int minCost(vector<int> &arr, int n)
{
    // Write Your Code Here.
    int c1=0 ,c2=0;
    for(int i=0 ;i<n ;i++){
        if(arr[i] % 2==0){
            c1++;
        }
        else{ 
            c2++;
        }
    }
    return min(c1,c2) ;
}
