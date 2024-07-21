// Check Permutation

#include <bits/stdc++.h> 

bool checkEqual(int a[26], int b[26]){
    for(int i=0; i<26; i++){
        if(a[i] != b[i]){
            return 0;
        }
    }
    return 1;
}

bool areAnagram(string &s1, string &s2){
    // Write your code here.
    int count1[26] = {0};

    for(int i=0; i<s1.length(); i++){
        int index = s1[i] - 'a';
        count1[index]++;
    }

    int i=0;
    int window = s1.length();
    int count2[26] = {0};

    while(i<s2.length()){
        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;

        char oldChar = s2[i-window];
        index = oldChar - 'a';
        count2[index]--;
        i++;

        if(checkEqual(count1,count2)){
            return 1;
        }
    }
    return 0;
}
