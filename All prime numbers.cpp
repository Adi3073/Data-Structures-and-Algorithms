// All prime numbers

#include <bits/stdc++.h>
using namespace std;

int main(){

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */
	int n;
	cin>>n;
	vector<bool> prime(n+1, true);
	prime[0] = prime[1] = false;
	for(int i=2; i<=n; i++){
		if(prime[i]){
			cout<<i<<endl;

			for(int j=2*i; j<=n; j=j+i){
				prime[j] = false;
			}
		}
	}
}


