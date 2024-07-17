// Convert String

#include <bits/stdc++.h> 
string convertString(string str) 
{
	// WRITE YOUR CODE HERE
	str[0] = toupper(str[0]);
	int n = str.length();
	for(int i=1; i<n; i++){
		if(str[i-1] == ' '){
			str[i] = toupper(str[i]);
		}
	}
	return str;
}
