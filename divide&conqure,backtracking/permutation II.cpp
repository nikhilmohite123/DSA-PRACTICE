// https://leetcode.com/problems/permutations-ii/solutions/
// Given a collection of numbers, nums, that might contain duplicates, return all possible unique permutations in any order.

#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;



void solve(vector<int>& s,vector<vector<int>> &ans,int i){
    if(i>=s.size()){
        ans.push_back(s);
        return;
    }
 unordered_map<int,bool> visit;
for(int j=i; j<s.size(); j++){
    if(visit.find(s[j])!=visit.end()){
        continue;
    }
    visit[s[j]]=true;
        swap(s[i],s[j]);
        solve(s,ans,i+1);

        // backtracking
        swap(s[i],s[j]);
    }

}

int main(){
    vector<int>nums{1,2,1};
    vector<vector<int>>ans;
    solve(nums,ans,0);

    // 
}