#include<iostream>
#include<vector>
using namespace std;

void print(vector<vector<char>>& bord,int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<bord[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
bool safe(vector<vector<char>>& bord,int n,int row,int col){
    // left
    int i=row,j=col;
    while(j>=0){
        if(bord[i][j]=='Q')return false;
        j--;
    }
i=row;
j=col;
    // upper
    while(i>=0 && j>=0){
         if(bord[i][j]=='Q')return false;
         i--;j--;
    }
i=row;
j=col;

    while(i<=n && j>=0){
         if(bord[i][j]=='Q')return false;
         i++;j--;
    }
    return true;
}

void solve(vector<vector<char>>& bord,int n,int col){
if(col>=n){
    print(bord,n);
    return;
}

// 1 case
for(int i=0; i<n; i++){
    if(safe(bord,n,i,col)){
        bord[i][col]='Q';
        solve(bord,n,col+1);
         bord[i][col]='-';
    }
}
}




int main(){
int n=4;

vector<vector<char>> bord(n,vector<char>(n,'-'));

solve(bord ,n,0);

}