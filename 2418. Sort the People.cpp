//2418. Sort the People

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int, string> m;
        int n = heights.size();
        for(int i=0; i<n; i++){
            m[heights[i]] = names[i];
        }
        sort(heights.rbegin(), heights.rend());
        for(int j=0; j<n; j++){
            names[i] = m[heights[i]];
        }
        return names;
    }
};
