// N-th Term Of GP

#include <bits/stdc++.h>

#define mod 1000000007
long long int power(int a, int n) {
    if (n == 0) return 1;
    long long int temp = power(a, n/2) % mod;
    if (n & 1) return (((temp * temp) % mod) * (a % mod)) % mod;
    else return (temp * temp) % mod;
}

int nthTermOfGP(int N, int A, int R) {
    long long int ans = ((A % mod) * (power(R, N-1) % mod)) % mod;
    return ans;
}
