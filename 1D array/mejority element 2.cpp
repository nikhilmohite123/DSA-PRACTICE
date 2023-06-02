#include<iostream>
#include<unordered_map>
#include<climits>
#include<vector>
using namespace std;


// https://takeuforward.org/data-structure/majority-elementsn-3-times-find-the-elements-that-appears-more-than-n-3-times-in-the-array/
// https://leetcode.com/problems/majority-element-ii/description/




vector<int> majorityElement(vector<int>& nums) {
 vector<int> ans;
 int n=nums.size()/3;
        
        int cnt1=0,cnt2=0,el1=INT_MIN,el2=INT_MIN;
        for(int i=0; i<nums.size(); i++){
            if(cnt1==0 && nums[i]!=el2){
                cnt1=1;
                el1=nums[i];
            }
            else if(cnt2==0 && nums[i]!=el1){
                cnt2=1;
                el2=nums[i];
            }
            else if(nums[i]==el1){
                cnt1++;
            }
            else if(nums[i]==el2){
                cnt2++;
            }
            else{
                cnt1--;cnt2--;
            }
        }
        cnt1=0;cnt2=0;

        for(int i=0; i<nums.size(); i++){
            if(el1==nums[i])cnt1++;
            if(el2==nums[i])cnt2++;
        }
        if(cnt1>n)ans.push_back(el1);
        if(cnt2>n)ans.push_back(el2);
        return ans;
    }


    int main(){
        vector<int>v{1,1,1,1,2,2,2,2,3,4};
        vector<int>ans=majorityElement(v);
        for(auto i:ans){
            cout<<i<<" ";
        }
    }