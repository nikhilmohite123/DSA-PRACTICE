#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
// https://leetcode.com/problems/beautiful-arrangement/description/ 
// Suppose you have n integers labeled 1 through n. A permutation of those n integers perm (1-indexed) is considered a beautiful arrangement if for every i (1 <= i <= n), either of the following is true:

// perm[i] is divisible by i.
// i is divisible by perm[i].
// Given an integer n, return the number of the beautiful arrangements that you can construct







// bool isbeautiful(vector<int>& a,int i){
//     if(i>=a.size())return true;

//     if((a[i]%(i+1)==0 )|| ((i+1) %a[i]==0) ){
//         return isbeautiful(a,i+1);
//     }
//     else{
//         return false;
//     }
// }

// void solve(vector<int>& a,int pos,int &cnt){
//     if(pos>=a.size()){
//         if(isbeautiful(a,0)){
//             cnt++;
//         }
//         return ;
//     }

//     for(int i=pos; i<a.size(); i++){
//         swap(a[pos],a[i]);
//         solve(a,pos+1,cnt);
//           swap(a[pos],a[i]);
//     }

// }
void  countArrangement_helper(vector<int> &a,int& cnt,int &n,int currnum){

if(currnum>=n+1){
    for(auto e:a){
        cout<<e<<" ";

    }
    cout<<endl;
    cnt++;
    return;
}



    for(int pos=1; pos<=n; pos++){


        if(a[pos]==0 && (currnum%pos==0 ||pos%currnum==0)){
            a[pos]=currnum;
             countArrangement_helper(a,cnt,n,currnum+1);
             a[pos]=0;

        }
    }
}
    int countArrangement(int n) {
        // vector<int>a;
        // for(int i=1; i<=n; i++){
        //     a.push_back(i);
        // }
        // int cnt=0;
        // solve(a,0,cnt);
        // return cnt;



        vector<int> a(n+1);
        int cnt=0;
         countArrangement_helper(a,cnt,n,1);
         return cnt;
    }


    int main(){
        int n;
        cin>>n;
       cout<< countArrangement(n);
    }