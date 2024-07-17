// Terms Of AP

#include <bits/stdc++.h> 
#include <vector>

vector < int > termsOfAP(int x) {
    // Write your code here.
    int cnt=0;
    vector<int> ans;
    int i=1;
    while(cnt != x){
        int asd = (3*i)+2;
        i++;
        if(asd%4 == 0){
            continue;
        }
        else{
            ans.push_back(asd);
            cnt++;
        }
    }
    return ans;
}
