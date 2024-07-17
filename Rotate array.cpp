// Rotate array

vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    vector<int> temp;
    for(int i=0; i<k; i++){
        temp.push_back(arr[i]);
    }
    arr.erase(arr.begin(),arr.begin()+k);

    for(int i=0; i<k; i++){
        arr.push_back(temp[i]);
    }
    return arr;
}
