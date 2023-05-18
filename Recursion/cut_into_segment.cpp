#include<iostream>
#include<vector>
#include<climits>
using namespace std;
// max no of segment provide each length x,y,z

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

int solve(int n,int& x,int &y,int &z){

if(n==0){
    return 0;
}
if(n<0){
    return INT_MIN;
}

int a=solve(n-x,x,y,z)+1;
int b=solve(n-y,x,y,z)+1;
int c=solve(n-z,x,y,z)+1;

int ans=max(a,max(b,c));
return ans;


}

int main(){
  
int n,x,y,z;
cin>>n>>x>>y>>z;

int ans=solve(n,x,y,z);
if(ans<0)
ans=0;
cout<<ans;






}