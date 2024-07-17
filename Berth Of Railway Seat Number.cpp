// Berth Of Railway Seat Number

#include <bits/stdc++.h> 
string berthType(int seatNumber)
{
    // Write your code here
    if(seatNumber > 72){
        return "Invalid";
    }
    int mod = seatNumber%8;
    if(mod == 1 || mod == 4){
        return "Lower";
    }
    if(mod == 2 || mod == 5){
        return "Middle";
    }
    if(mod == 3 || mod == 6){
        return "Upper";
    }
    if(mod == 7){
        return "Side Lower";
    }
    if(mod == 0){
        return "Side Upper";
    }
}
