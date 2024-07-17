// Painter's Partition Problem

bool isPossible(vector<int>& boards, int k, int mid){
    int painterCount = 1;
    int boardLength = 0;

    for(int i=0; i<boards.size(); i++){
        if(boardLength + boards[i] <= mid){
            boardLength += boards[i];
        }
        else{
            painterCount++;
            if(painterCount > k || boards[i] > mid){
                return false;
            }
            boardLength = boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    if (boards.size() < k) {
        return -1;
    }
    
    int s = 0;
    int sum = 0;

    for(int i=0; i<boards.size(); i++){
        sum += boards[i];
    }

    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s <= e){
        if(isPossible(boards, k, mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
