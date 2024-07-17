// Subsequences of String

#include <bits/stdc++.h> 
void solve(string nums, string output,int index, vector<string> &ans){

        if(index >= nums.size()){
            if(output.length() > 0){
				ans.push_back(output);
			}
            return;
        }
        solve(nums,output,index+1,ans);
        
        output.push_back(nums[index]);
        solve(nums,output,index+1,ans);

    }

vector<string> subsequences(string str){
	
	// Write your code here
	vector<string> ans;
	string output="";
	int index=0;
	solve(str,output,index,ans);
	return ans;
}
