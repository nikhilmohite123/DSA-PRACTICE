#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;



// https://leetcode.com/problems/permutations-ii/description/
// Given a collection of numbers, nums, that might contain duplicates,
//  return all possible unique permutations in any order.

void permutaion_solver(vector<int>& a,int postion){
    if(postion>=a.size()){
        for(auto e:a){
            cout<<e<<" ";

        }
        cout<<endl;
        return;
    }
// for unique combination 
unordered_map<int ,bool> visted;
//  solve one case
for(int i=postion; i<a.size(); i++){
    if(visted.find(a[i])!=visted.end())continue;
      visted[a[i]]=true;
    swap(a[postion],a[i]);
    permutaion_solver(a,postion+1);
    swap(a[postion],a[i]);
}


}







int main(){
    vector<int> a{1,2,1};
    permutaion_solver(a,0);
}




