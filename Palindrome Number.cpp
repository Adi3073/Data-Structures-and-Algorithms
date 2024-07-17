//Palindrome Number

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        string a= to_string(x);
        int flag = 0;
        for(int i=0; i<=a.length()/2; i++){
            if(a[i] == a[a.length()-i-1]){
                flag = 1;
            }
            else{
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            return true;
        }
        else{
            return false;
        }
    }
};
