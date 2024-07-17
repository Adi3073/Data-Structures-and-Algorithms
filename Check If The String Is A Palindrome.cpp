// Check If The String Is A Palindrome

#include <bits/stdc++.h> 

bool checkPalindrome(string s){
    int high=s.size()-1;
    int low=0;
    int a,b;
    while(low<high){
        if(isalpha(s[low])==0 && isdigit(s[low])==0 && s[low]==s[high]){
            low++;
            high--;
            continue;
        }
        else if(isalpha(s[low])==0&& isdigit(s[low])==0&& s[low]!=s[high]){
            low++;
            continue;
        }
        else if(isalpha(s[high])==0 && isdigit(s[high])==0 && s[low]!=s[high]){
            high--;
            continue;
        }
        else{
            a=int(s[low]);
            b=int(s[high]);
        }

        if(a==b || abs(a-b)==32){
            low++;
            high--;
        }
        else{
            return false;
        }
    }
    return true;
}
