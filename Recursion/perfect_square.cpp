// https://leetcode.com/problems/perfect-squares/description/
// Given an integer n, return the least number of perfect square numbers that sum to n.

//  A perfect square is an integer that is the square of an integer; in other words, 
// it is the product of some integer with itself.
//  For example, 1, 4, 9, and 16 are perfect squares while 3 and 11 are not.


#include <iostream>

#include<vector>
#include <cmath>
#include<climits>
using namespace std;

int solve(int n){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }

int mini=INT_MAX;
for(int i=1; i<=sqrt(n);i++){
    int perfectsquare=i*i;
    int ans=solve(n-perfectsquare)+1;
    
       
        mini=min(mini,ans);
    
}
    return mini;
}


int main() {
 int n;
 cin>>n;

cout<<solve(n)-1;
}
