// Last index of element

#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n,x;
    int ans = -1;
    cin>>n;
    int* arr = new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>x;

    for(int i=n-1; i>=0; i--){
        if(arr[i] == x){
            ans = i;
            break;
        }
    }
    cout<<ans;
    return 0;
}
