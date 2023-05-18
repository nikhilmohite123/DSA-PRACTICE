#include<iostream>
#include<vector>
#include<climits>
using namespace std;


int solve(vector<int>& a,int target){
    if(target==0){
        // valid 
        return 0;

    }
    if(target<0){
        // ignore karana he
        return INT_MAX;
    }

    // ek hum solve karte he

    int mini=INT_MAX;

    for(int i=0; i<a.size(); i++){
        int ans=solve(a,target-a[i]);
       if(ans!=INT_MAX){
        mini=min(mini,ans+1);
      }
    }
    return mini;
}


int main(){
    vector<int> v{1,2,3};
    int target=5;

    cout<<solve(v,target);
}