#include <iostream>
#include<vector>
using namespace std;
bool issafe(vector<vector<int>> &m,vector<vector<bool>> &visited, int &row,int &col,int i,int j){
    

    if((i>=0 && i<=row-1) && (j>=0 && j<=col-1) && 
    (visited[i][j]==false)&& (m[i][j]==1)){
        return true;
    }
    return false;
}
void findpath(vector<vector<int>> &m,vector<vector<bool>> &visited,int &row,int &col,int i,int j,vector <string>&path,string op ){
    if(i==row-1 && j==col-1){
        path.push_back(op);
        return;
    }

    // D
    if(issafe(m,visited,row,col,i+1,j)){
        visited[i+1][j]=true;
        findpath(m,visited,row,col,i+1,j,path,op+'D');
        visited[i+1][j]=false;
    }

    // L
        if(issafe(m,visited,row,col,i,j-1)){
        visited[i][j-1]=true;
        findpath(m,visited,row,col,i,j-1,path,op+'L');
        visited[i][j-1]=false;
    }
    // R
        if(issafe(m,visited,row,col,i,j+1)){
        visited[i][j+1]=true;
        findpath(m,visited,row,col,i,j+1,path,op+'R');
        visited[i][j+1]=false;
    }
    // U
        if(issafe(m,visited,row,col,i-1,j)){
        visited[i][j-1]=true;
        findpath(m,visited,row,col,i-1,j,path,op+'U');
        visited[i-1][j]=false;
    }
}
int main() {
   vector<vector<int>> m{ {1,0,0},
                          {1,1,1},
                          {0,1,1}
        
   };
   int row=3,col=3;
   vector<vector<bool>> visited(row,vector<bool> (col,false));
   visited[0][0]=true;
   vector<string>path;
   string op="";

findpath(m,visited,row,col,0,0,path,op);

for(auto i:path){
    cout<<i<<" ";
}





}
