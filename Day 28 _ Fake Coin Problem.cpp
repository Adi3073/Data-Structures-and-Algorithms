// Day 28 : Fake Coin Problem
/*I solved this problem assuming that the sum vector as non-decreasing vector having only one duplicate value*/ 

int FakeCoin(vector<int> &sum){
	// Write your code here.
	for(int i=0; i<sum.size(); i++){
		if(sum[i] != i+1){
			return i;
		}
	}	
}
