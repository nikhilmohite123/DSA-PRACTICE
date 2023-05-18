#include<iostream>
#include<vector>
using namespace std;

// https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-two-arrays2408/1

  string calc_Sum(int *a,int n,int *b,int m){
    // Complete the function
    
    string ans;
    
    int i=n-1,j=m-1,carry=0;
    
    while(i>=0 && j>=0){
        int x=a[i]+b[j]+carry;
        int digit=x%10;
        ans.push_back(digit+'0');
        carry=x/10;
        i--;j--;
    }
    while(i>=0){
         int x=a[i]+0+carry;
        int digit=x%10;
        ans.push_back(digit+'0');
        carry=x/10;
        i--;
    }
    while(j>=0){
         int x=0+b[j]+carry;
        int digit=x%10;
        ans.push_back(digit+'0');
        carry=x/10;
        j--;
    }
    while(carry){
        ans.push_back((carry%10)+'0');
        carry=carry/10;
    }
    while(ans[ans.size()-1]=='0'){
        ans.pop_back();
    }
    reverse(ans.begin(),ans.end());
    return ans;
    }