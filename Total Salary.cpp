// Total Salary

#include <bits/stdc++.h> 
int totalSalary(int basic, char grade) 
{
    // Write your code here.
    int all;
    float hra=0.2*basic;
    float da=0.5*basic;
    float pf=0.11*basic;
    if(grade=='A'){
        all=1700; 
    }
    else if(grade=='B'){
        all=1500;
    }
    else {
        all=1300;
    }
    
    return round(basic+hra+da+all-pf);
    
}
