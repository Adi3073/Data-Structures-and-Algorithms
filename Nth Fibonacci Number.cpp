// Nth Fibonacci Number

#include<bits/stdc++.h>
using namespace std;

int fibonacciNumber(int n){
    // Write your code here.
    long long int f[n];
    long long int ans;
    long long int min = 1000000007;
    f[0]=1;
    f[1]=1;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            f[i+2] = f[i]%min + f[j]%min;
            break;
        }
        ans=(f[n-1])%min;
    }

    return ans;
}

int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        int n;
        cin>>n;

        cout<<fibonacciNumber(n);
}
