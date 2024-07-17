// Find The Single Element

#include<vector>

int getSingleElement(vector<int> &arr){
	// Write your code here.
	int n=arr.size();
	int i=0;
	while(i+1<n){
		if(arr[i]==arr[i+1]) {
			i+=2;
		}
		else {
			return arr[i];
		}
	}
	return arr[i];
}
