#include <iostream>
#include<vector>
using namespace std;


// counts of===   subseq of sum equal to k
int solve(vector<int> &v,int target,int sum,int i){
  if(i>=v.size()){
    if(sum==target){
     
    return 1;
    }
    return 0;
  }
 

  // include
int l=solve(v,target,sum+v[i],i+1);

// not taken
int r=solve(v,target,sum,i+1);
return l+r;

}

int main() {
    vector<int> v{1,2,1,2};
    int t=3;
  
    cout<<solve(v,t,0,0);
}
