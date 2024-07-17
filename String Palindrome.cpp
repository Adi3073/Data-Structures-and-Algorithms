// String Palindrome

#include <bits/stdc++.h>
bool checkPalindrome(char str[]) {
    // Write your code here
    int n = strlen(str);
    bool ans = true;
    for(int i=0; i<n/2; i++){
        if(str[i] == str[n-i-1]){
            ans = true;
        }
        else{
            ans = false;
        }
    }
    return ans;
}
