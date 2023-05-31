#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;


// https://leetcode.com/problems/next-permutation/solutions/3581088/easy-to-understand-and-know-how-to-built-permutation/
// https://youtu.be/quAS1iydq7U
// must watch



void reverse(vector<int>& nums,int s,int e){
    while(s<e){
        swap(nums[s],nums[e]);
        s++;e--;
    }
}
   void nextPermutation(vector<int>& nums) {
   if(nums.size()==1){
            return;
        }
        int idx1=-1,idx2=-1;
       


        for(int i=nums.size()-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                idx1=i;
              break;
            }
            


        }
      
          if(idx1==-1){
            reverse(nums,0,nums.size()-1);
            return;
        }
        for(int i=nums.size()-1; i>=0; i--){
            if(nums[i]>nums[idx1]){
                idx2=i;
              break;
            }
            


        }
       
       
        swap(nums[idx1],nums[idx2]);
        reverse(nums,idx1+1,nums.size()-1); 

    }


int main(){
    vector<int>v{1,2,3};
    nextPermutation(v);
    for(auto i:v){
        cout<<i<<" ";
    }
}