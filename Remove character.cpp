//Remove character

#include <bits/stdc++.h> 
#include <iostream>
#include <cstring>
using namespace std;

string removeAllOccurrencesOfChar(string input, char c) {
    // Write your code here
    while(input.length() != 0 && input.find(c)<input.length()){
        input.erase(input.find(c), 1);
    }
    return input;
}

int main() {
    string input;
    char c;
    cin >> input >> c;
    string output = removeAllOccurrencesOfChar(input, c);
    cout << output << endl;
    return 0;
}
