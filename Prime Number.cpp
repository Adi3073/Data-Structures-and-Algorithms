// Prime Number

#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n;
	cin>>n;
	vector<bool> prime(n+1, true);
	prime[0] = prime[1] = false;
	for(int i=2; i<=n; i++){
		if(prime[i]){

			for(int j=2*i; j<=n; j=j+i){
				prime[j] = false;
			}
		}
	}
    if(prime[n]){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}
