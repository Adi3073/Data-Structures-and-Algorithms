// Find power of a number

#include <bits/stdc++.h> 
long long Pow(int X, int N)
{
    // Write your code here. 
    if(N == 0){
        return 1;
    }
    return X*Pow(X, N-1);
}
