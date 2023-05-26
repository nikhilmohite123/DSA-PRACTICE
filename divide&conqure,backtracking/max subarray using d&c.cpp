#include<iostream>
#include<vector>
#include<climits>
using namespace std;
// https://leetcode.com/problems/maximum-subarray/

// If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.

int maxsubarray(vector<int>& v,int s,int e){


    if(s>=e)return v[s];

    int leftmaxsum=INT_MIN,rightmaxsum=INT_MIN,leftsum=0,rightsum=0;
    int m=(s+e)/2;

    int left=maxsubarray(v,s,m);
    int right=maxsubarray(v,m+1,e);

// leftside croossborder sum
    for(int i=m; i>=s; i--){
        leftsum+=v[i];
        leftmaxsum=max(leftsum,leftmaxsum);
    }


// right side cross border
     for(int i=m+1; i<=e; i++){
        rightsum+=v[i];
       rightmaxsum=max(rightsum,rightmaxsum);
    }

    int crossborder=leftmaxsum+rightmaxsum;

    return max(crossborder,max(left,right));
}



int main(){
    vector<int> nums{-1,4,2,8,-3,5,8,-2,2,-5};
    cout<<maxsubarray(nums,0,nums.size()-1);
}