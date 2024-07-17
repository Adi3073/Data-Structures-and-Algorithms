// First Unique Character in a String

#include <bits/stdc++.h> 
char findNonRepeating(string s) {
    // Write your code here.
    
    unordered_map<char, int> charCount;
    
    // Count occurrences of each character
    for (char c : s) {
        charCount[c]++;
    }
    
    // Find the first unique character
    for (int i = 0; i < s.length(); i++) {
        if (charCount[s[i]] == 1) {
            return s[i];
        }
    }
    return '#';
}
