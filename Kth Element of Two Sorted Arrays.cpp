// Kth Element of Two Sorted Arrays

int ninjaAndLadoos(vector<int> &row1, vector<int> &row2, int m, int n, int k) {
    // Write your code here.
	int row1cnt,row2cnt;

    if(k>m){
        row1cnt=m;
    }
    else{
        row1cnt=k;
    }
    if(k>n){
        row2cnt=n;
    }
    else{
        row2cnt=k;
    }
    while(row1cnt!=0 || row2cnt!=0){
        if(row1cnt+row2cnt==k){
            return max(row1[row1cnt-1],row2[row2cnt-1]);
        }
        if(row1[row1cnt-1]<row2[row2cnt-1]){
            row2cnt--;
        }
        else{
            row1cnt--;
        }
    }
}
