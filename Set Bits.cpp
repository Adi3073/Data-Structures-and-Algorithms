// Set Bits

#include <bits/stdc++.h> 
#include <iostream>

using namespace std;

    //Write your countBits function here
int countBits(int n){
    int sum=0;
    while(n != 0){
        if(n&1 == 1){
            sum++;
        }
        n = n/2;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    cout<<countBits(n);
    return 0;
}
