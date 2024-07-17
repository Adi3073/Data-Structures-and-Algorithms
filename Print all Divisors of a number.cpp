// Print all Divisors of a number

int* printDivisors(int n, int &size){
    // Write your code here
    int* a= new int[n];
    size=0;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            a[size]=i;
            size++;
        }
    }
    return a;
}
