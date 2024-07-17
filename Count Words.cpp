// Count Words

#include <bits/stdc++.h> 
#include <iostream>
#include <cstring>
using namespace std;

int countWords(string input) {
    // Write your code here
    if(input.length() == 0){
        return 0;
    }
    int cnt = 1;
    for(int i=0; i<input.length(); i++){
        if(input[i] == ' '){
            cnt++;
        }
    }
    return cnt;
}

int main() {
    string input;
    getline(cin, input);
    int output = countWords(input);
    cout << output << endl;
    return 0;
}
