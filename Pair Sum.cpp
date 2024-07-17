// Pair Sum

#include <bits/stdc++.h> 

int pairSum(vector<int> &arr, int n, int target){

    int count = 0;
    int left = 0, right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {

            count++;

            while (left < right && arr[left] == arr[left + 1]){
                left++;
            } 

            while (left < right && arr[right] == arr[right - 1]){
                right--;
            } 

            left++;
            right--;
        }
        else if (sum < target) {
            left++;
        } 
        else {
            right--;
        }
    }

    return count == 0 ? -1 : count;
}
