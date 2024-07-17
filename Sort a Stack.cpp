// Sort a Stack

#include <bits/stdc++.h>
void solve1(stack<int> &stack, vector<int> &v){
  if(stack.empty()){
    return;
  }
  v.push_back(stack.top());
  stack.pop();
  solve1(stack, v);
}

void solve2(stack<int> &stack, vector<int> &v, int i){
  if(i == v.size()){
    return;
  }
  stack.push(v[i]);
  solve2(stack, v, i+1);
}

void sortStack(stack<int> &stack) {
  // Write your code here
  vector<int> v;
  solve1(stack, v);
  sort(v.begin(), v.end());
  int i=0;
  solve2(stack, v, i);
}
