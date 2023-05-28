#include<iostream>
#include<vector>
using namespace std;
// https://leetcode.com/problems/combination-sum/solutions/1777334/c-detailed-explanation-w-tree-diagram-recursion-backtracking-each-step-explained/
void solve(vector<int> &a,vector<int>& v,int t,int index){

if(t==0){
    for(auto e: v){
        cout<<e<<" ";
    }
    cout<<endl;
    return;
}
if(t<0)return;



for(int i=index; i<a.size(); i++){
    v.push_back(a[i]);
    solve(a,v,t-a[i],i);
    v.pop_back();
}


}


int main(){
    vector<int>a{2,3};
    int t=5;
    vector<int>v;
    solve(a,v,t,0);
}