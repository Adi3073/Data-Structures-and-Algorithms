// Swap Alternate

void swapAlternate(int *arr, int size)
{
    //Write your code here
    if(size&1){
        for(int i=0; i<size-1; i+=2){
            swap(arr[i], arr[i+1]);
        }
    }
    else{
        for(int i=0; i<size; i+=2){
            swap(arr[i], arr[i+1]);
        }
    }
}
