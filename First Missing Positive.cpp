 //First Missing Positive

#include <bits/stdc++.h> 

int firstMissing(int arr[], int n){
    int cnt =1;
    sort(arr,arr+n);

    for(int i=0;i<n;i++){
        if(arr[i]<=0){
            continue;
        }
        if(arr[i]!=cnt){
            return cnt; 
        }
        cnt++;
    }
    return cnt;
}
