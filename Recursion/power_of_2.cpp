
#include<iostream>
using namespace std;

// input =n,
// output=2^n;
int power(int n){

  if(n==0){
    // 2^0=1;
    return 1;
  }

  int ans=2*power(n-1);
  return ans;
}


int main(){
    int n;
    cin>>n;

    cout<<power(n);
}