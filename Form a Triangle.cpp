// Form a Triangle

#include <bits/stdc++.h> 
bool possibleToMakeTriangle(vector<int> &arr)
{
    // Write your code here.
    sort(arr.begin(),arr.end());
    int n = arr.size();
    int first = arr[0];
    int second = arr[1];
    for(int i=2;i<n;i++){
        if(first + second > arr[i]){
            return true;
        }

        else{
            first = second;
            second = arr[i];
        }
    }
    return false;
}
