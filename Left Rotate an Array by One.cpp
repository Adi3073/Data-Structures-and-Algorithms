// Left Rotate an Array by One

#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    int temp = arr[0];
    arr.erase(arr.begin());
    arr.push_back(temp);
    return arr;
}
