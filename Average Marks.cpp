// Average Marks

#include <bits/stdc++.h> 
#include <utility>

pair<char, int> averageMarks(char firstLetterOfName, int m1, int m2, int m3) {
    // Write your code here.
    pair<char,int> a;
    int m=(m1+m2+m3)/3;
    a.first=firstLetterOfName;
    a.second=m;
    return a;
}
