#include<iostream>
using namespace std;

void sort012(int *a,int n){
        int low=0,m=0,h=n-1;
        while(m<=h){
            if(a[m]==0){
                swap(a[low],a[m]);
                low++;m++;
            }
            else if(a[m]==1){
                m++;
            }
            else{
                swap(a[m],a[h]);
                h--;
            }
        }
}



int main(){
    int a[5]={2,0,1,1,0};
    sort012(a,5);
    for(int i=0; i<5; i++){
        cout<<a[i]<<" ";
    }
}