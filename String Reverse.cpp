// String Reverse

#include <bits/stdc++.h> 

string stringReverse(string s) {

    // Write your code here.
    int start =0;
    int end =s.size()-1;
  
    while(start<=end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
    return s;
}
