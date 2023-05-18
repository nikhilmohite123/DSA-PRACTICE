// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

// There is only one repeated number in nums, return this repeated number.


// using negative marking method
#include<iostream>
#include<vector>
using namespace std;
 int findDuplicate(vector<int>& nums) {
     for(int i=0; i<nums.size(); i++){
     
       if(nums[abs(nums[i])]<0){
         return abs (nums[i]);
       };
       nums[abs(nums[i])]*=-1;

     }
     return -1;
    }