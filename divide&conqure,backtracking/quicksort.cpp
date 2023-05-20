#include<iostream>
#include<vector>
using namespace std;


int pivotindexfind(vector<int> &a,int s,int e){
int pindex=s;
int pelement=a[s];


int cnt=0;
// finding num less than pivotelement
for(int i=s+1; i<=e; i++ ){
if(a[i]<=pelement)cnt++;
}

pindex=s+cnt;
swap(a[s],a[pindex]);
pelement=a[pindex];


int i=s,j=e;
while(i<pindex && j>pindex){
    while(a[i]<=pelement){
        i++;
    }
    while(a[j]>pelement){
        j--;
    }
    if(a[i]>pelement && a[j]<pelement)
    swap(a[i],a[j]);
}

return pindex;
}
void  quicksort(vector<int> &a,int s,int e){
    if(s>=e)return;

    int p=pivotindexfind(a,s,e);
    quicksort(a,s,p-1);
    quicksort(a,p+1,e);
}

int main(){
    vector<int>a{5,4,3,2,1};
    quicksort(a,0,a.size()-1);
    for(auto i:a){
        cout<<i<<" ";
    }
}
