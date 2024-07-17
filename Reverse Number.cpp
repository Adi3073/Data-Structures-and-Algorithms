// Reverse Number

#include <bits/stdc++.h> 
long long int reverseNumber(long long int n)
{
	//type your code here
	long long int rev = 0;

	while(n != 0){
		rev = rev*10 + n%10;
		n = n/10;
	}
	
	return rev;
}
