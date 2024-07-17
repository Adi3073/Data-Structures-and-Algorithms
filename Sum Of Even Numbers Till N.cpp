// Sum Of Even Numbers Till N

#include <bits/stdc++.h> 
long long evenSumTillN(int n) {
    // Write your code here.
    long long sum=0;
    for(int i=0; i<=n; i=i+2){
        sum=sum+i;
    }
    return sum;
}
