// Search In A 2D Matrix

bool searchMatrix(vector<vector<int>>& mat, int target) {
    int n = mat.size();
    int m = mat[0].size();
    
    int start = 0;
    int end = (n*m)-1;
    int mid = start + (end - start)/2;

    while(start <= end){
        int element = mat[mid/m][mid%m];

        if(element == target){
            return 1;
        }

        if(element < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }    
    return 0;
}
