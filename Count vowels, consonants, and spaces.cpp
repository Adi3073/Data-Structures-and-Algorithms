// Count vowels, consonants, and spaces

#include <bits/stdc++.h> 
vector<int> countVowelsConsonantsSpaces(string &s, int n) {
    // Write your code here.
    int v, c, sp;
    v = 0;
    c = 0;
    sp = 0;
    for(int i=0; i<n; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
            v++;
        }
        else if(s[i] == ' '){
            sp++;
        }
    }
    c = n-v-sp;
    vector<int> ans;
    ans.push_back(v);
    ans.push_back(c);
    ans.push_back(sp);

    return ans;
}
