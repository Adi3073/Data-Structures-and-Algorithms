// Power of Two

bool isPowerOfTwo(int n)
{	
    // Write your code here
    while(n != 1){
        if(n%2 != 0){
            return 0;
            break;
        }
        n = n/2;
    }
    return 1;
}
