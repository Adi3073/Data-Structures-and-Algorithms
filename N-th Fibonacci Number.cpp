// N-th Fibonacci Number

#include <bits/stdc++.h> 
const int MOD = 1000000007;
// Function to multiply two matrices
vector<vector<long long>> multiplyMatrices(const vector<vector<long long>>& A, const vector<vector<long long>>& B) {
    int size = A.size();
    vector<vector<long long>> C(size, vector<long long>(size, 0));

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            for (int k = 0; k < size; ++k) {
                C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % MOD;
            }
        }
    }
    return C;
}
// Function to perform matrix exponentiation
vector<vector<long long>> matrixExponentiation(const vector<vector<long long>>& M, long long power) {

    int size = M.size();
    vector<vector<long long>> result(size, vector<long long>(size, 0));

    // Initialize result as identity matrix
    for (int i = 0; i < size; ++i) {
        result[i][i] = 1;
    }

    vector<vector<long long>> base = M;

    while (power > 0) {
        if (power % 2 == 1) {
            result = multiplyMatrices(result, base);
        }
        base = multiplyMatrices(base, base);
        power /= 2;
    }
    return result;

}
// Function to compute nth Fibonacci number using matrix exponentiation
long long fibonacciNumber(int n) {

    if (n == 0) return 0;
    if (n == 1) return 1;

    vector<vector<long long>> M = {{1, 1}, {1, 0}};
    vector<vector<long long>> result = matrixExponentiation(M, n - 1);

    return result[0][0];

}
