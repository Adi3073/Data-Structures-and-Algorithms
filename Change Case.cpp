// Change Case

#include <bits/stdc++.h> 
void changeCase(string & str) {
    // Write your code here.
    int n = str.length();
    for(int i=0; i<n; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] + 'A' - 'a';
        }
        else if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] - 'A' + 'a';
        }
    }
}
