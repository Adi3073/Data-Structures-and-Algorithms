// Find Duplicate in Array

#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){

    sort(arr.begin(),arr.end());
    
    int start = 0;
    int end = arr.size()-1;
    int mid = start+(end-start)/2;

    while (start<=end)
    {
        for (int i = 0; i < mid; i++) {
          if (arr[i] == arr[i+1]) {
            return arr[i];
          }
        }
        start = mid+1;
        mid = start+(end-start)/2;
    }

}
