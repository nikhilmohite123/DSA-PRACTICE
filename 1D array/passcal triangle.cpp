#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

// https://leetcode.com/problems/pascals-triangle/description/
// https://takeuforward.org/data-structure/program-to-generate-pascals-triangle/  must watch and read

vector<int> genrateRow(int n){
 vector<int>row;
row.push_back(1);
long long ans=1;
 for(int i=1; i<n; i++){
        ans=ans*(n-i);
        ans/=i;
        row.push_back(ans);
 }
return row;
}


int main(){
 int numRows=6;
 vector<vector<int>>ans;
         
for(int i=1; i<=numRows; i++){
 ans.push_back(genrateRow(i));
}
        
}