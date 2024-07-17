// Remove Duplicates from Sorted Array

int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int a=1;
	for(int i=1; i<n; i++){
		if(arr[i]!=arr[i-1]){
			arr[a]=arr[i];
			a++;
		}
	}
	return a;
}
