// Binary Search

int BS(vector<int> arr, int s, int e, int target){

    if(s>e){
        return -1;
    }

    int mid = s+(e-s)/2;

    if(arr[mid] == target){
        return mid;
    }

    if(arr[mid] < target){
        return BS(arr,mid+1,e,target);
    }
    else{
        return BS(arr,s,mid-1,target);
    }

}

int search(vector<int> &nums, int target) {
    // Write your code here.
    int s=0;
    int e=nums.size()-1;
    return BS(nums,s,e,target);
}
