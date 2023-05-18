#include<iostream>
#include<unordered_map>
using namespace std;
// mejority element that apper cnt is gtrater than n/2;

int  mejority(int *a,int n){
    unordered_map<int ,int> mp;
    for(int i=0; i<n; i++){
        mp[a[i]]++;
    }

  for( auto i: mp){
 
 if(i.second> n/2){
     return i.first;
 }
  }
  return 0;
  
}

int main(){

int a[10];
int n;
cin>>n;

for(int i=0; i<n; i++){
    cin>>a[i];
}

cout<< mejority(a,n);

}