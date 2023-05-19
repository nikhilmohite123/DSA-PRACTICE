#include <iostream>
#include<vector>
using namespace std;


// only one answer=      subseq of sum equal to k
bool solve(vector<int> &v,vector<int> ans,int target,int sum,int i){
  if(i>=v.size()){
    if(sum==target){
      for(auto it:ans){
        cout<<it<<" ";

      }
  
    return true;
    }
    return false;
  }
 

  // include

  ans.push_back(v[i]);
  if(sum+v[i]<=target)
 if( solve(v,ans,target,sum+v[i],i+1)==true )return true;
 


  // exclude
  ans.pop_back();
 if( solve(v,ans,target,sum,i+1)==true) return true;
 return false;
}

int main() {
    vector<int> v{1,2,1,2};
    int t=2;
    vector<int>ans;
    solve(v,ans,t,0,0);
}
