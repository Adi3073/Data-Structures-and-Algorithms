// Guess The Number using recursion

#include <bits/stdc++.h> 
/*
    The higherlower(int n) function can be called from guesser object
    @api: guesser.higherlower(n)
    return value will be -1 if n is lower, 0 is n is equal or 1 if n is higher.
*/

int numberGuess(int n, Guesser guesser){
    // Write your code here.
    int where = guesser.higherlower(n);
    if(where == 0){
        return n;
    }

    if(where == -1){
        n = n+1;
        numberGuess(n, guesser);
    }
    else if(where == 1){
        n = n-1;
        numberGuess(n, guesser);
    }
}
