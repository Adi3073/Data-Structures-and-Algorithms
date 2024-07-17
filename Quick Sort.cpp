// Quick Sort

#include <bits/stdc++.h> 

int part(vector<int>& arr, int s, int e){

    int pivot = arr[s];

    int cnt=0;
    for(int i=s+1; i<=e; i++){
        if(arr[i] <= pivot){
            cnt++;
        }
    }

    int pIndex = s + cnt;
    swap(arr[pIndex], arr[s]);
    int i=s;
    int j=e;

    while(i < pIndex && j > pIndex){

        while(arr[i] <= arr[pIndex]){
            i++;
        }

        while(arr[j] > arr[pIndex]){
            j--;
        }

        if(i < pIndex && j > pIndex){
            swap(arr[i++], arr[j--]);
        }

    }

    return pIndex;

}

void solve(vector<int>& arr, int s, int e){

    if(s>=e){
        return;
    }

    int p = part(arr, s, e);

    solve(arr, s, p-1);

    solve(arr, p+1, e);

}

vector<int> quickSort(vector<int> arr)
{
    // Write your code here.
    solve(arr, 0, arr.size()-1);

    return arr;
}
