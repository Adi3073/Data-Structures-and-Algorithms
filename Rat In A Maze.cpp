// Rat In A Maze

#include <bits/stdc++.h> 

bool isSafe(vector < vector < int >> & arr, int n, int x, int y, vector<vector<int>> visited){

    if((x>=0 && x<n) && (y>=0 && y<n) && arr[x][y] == 1 && visited[x][y] == 0){
        return true;
    }
    else{
        return false;
    }

    

}

void solve(vector < vector < int >> & arr, int n, vector<string>& ans, int x, int y, vector<vector<int>> visited, string take){

    if(x==n-1 && y==n-1){
        ans.push_back(take);
        return;
    }

    visited[x][y]=1;

    //down
    int newx = x+1;
    int newy = y;
    if(isSafe(arr, n, newx, newy, visited)){
        take.push_back('D');
        solve(arr,n,ans,newx,newy,visited,take);
        take.pop_back();
    }

    //left
    newx = x;
    newy = y-1;
    if(isSafe(arr, n, newx, newy, visited)){
        take.push_back('L');
        solve(arr,n,ans,newx,newy,visited,take);
        take.pop_back();
    }

    //up
    newx = x-1;
    newy = y;
    if(isSafe(arr, n, newx, newy, visited)){
        take.push_back('U');
        solve(arr,n,ans,newx,newy,visited,take);
        take.pop_back();
    }

    //right
    newx = x;
    newy = y+1;
    if(isSafe(arr, n, newx, newy, visited)){
        take.push_back('R');
        solve(arr,n,ans,newx,newy,visited,take);
        take.pop_back();
    }

    visited[x][y] = 0;
}


vector < string > searchMaze(vector < vector < int >> & arr, int n) {
    // Write your code here.
    vector<string> ans;
    if(arr[0][0] == 0){
        return ans;
    }
    vector<vector<int>> visited = arr;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            visited[i][j] = 0;
        }
    }
    string take="";

    int x=0;
    int y=0;

    solve(arr, n, ans, x, y, visited, take);
    sort(ans.begin(), ans.end());
    return ans;
}
