// Stack Implementation Using Array

// Stack class.
class Stack {
    int *arr;
    int t;
    int size;
public:
    
    Stack(int capacity) {
        // Write your code here.
        this->size = capacity;
        t = -1;
        arr = new int[capacity];
    }

    void push(int num) {
        // Write your code here.
        if(size - t > 1){
            t++;
            arr[t] = num;
        }
    }

    int pop() {
        // Write your code here.
        if(t >= 0){
            int ans = arr[t];
            t--;
            return ans;
        }
        else{
            return -1;
        }
    }
    
    int top() {
        // Write your code here.
        if(t >= 0){
            return arr[t];
        }
        else{
            return -1;
        }
    }
    
    int isEmpty() {
        // Write your code here.
        if(t == -1){
            return 1;
        }
        else{
            return 0;
        }
    }
    
    int isFull() {
        // Write your code here.
        if(size - t == 1){
            return 1;
        }
        else{
            return 0;
        }
    }
    
};
