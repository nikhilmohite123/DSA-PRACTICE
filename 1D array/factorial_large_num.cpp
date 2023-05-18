#include<iostream>
#include<vector>
using namespace std;


 vector<int> factorial(int N){
        // code here
        vector<int> ans{1};
        int c=0;
        for(int i=2; i<=N; i++){
            int j=0;
            while(j<ans.size()){
                int x=ans[j]*i+c;
                ans[j]=x%10;
                j++;
                c=x/10;
            }
            while(c){
                ans.push_back(c%10);
                c=c/10;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }