#include<iostream>
#include<vector>
#include<climits>
using namespace std;
//  return the maximum sum of subseq in which no two element are adjacent



void solve(vector<int>& v,int sum,int& ans,int i){
    if(i>=v.size()){
        
        if(ans<sum){
            ans=sum;
        }
        // cout<<sum<<" ";
        return;
    }


    // include
    solve(v,sum+v[i],ans,i+2);
    // exclude
    solve(v,sum,ans,i+1);
}


int main(){
    vector<int> v{2,1,4,9};
   int sum=0;
int ans=INT_MIN;
   solve(v,sum,ans,0);
   cout<<ans;
}