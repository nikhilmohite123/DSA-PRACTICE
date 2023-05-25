#include<iostream>
using namespace std;

// https://leetcode.com/problems/sort-an-array/

// simple merge sort taking space of O(n) therfor we use inpalce merge sort using gap method

void merge(int *a,int s,int e){
    int len=(e-s+1);
    int gap=len/2+len%2;


    while(gap!=0){
        int i=s, j=gap+i;
        while(j<=e){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
                
            }
            i++;j++;
        }
        if(gap==1){
            gap=0;
        }
        else{
            gap=gap/2+gap%2;
        }
    }
}




void mergesort(int *a,int s,int e){
    if(s>=e)return ;
int m=(s+e)/2;
    mergesort(a,s,m);
    mergesort(a,m+1,e);
    merge(a,s,e);
}


int main(){
    int a[5]={5,4,2,1,0};

    mergesort(a,0,4);
    for(int i=0; i<5; i++){
cout<<a[i]<<" ";
    }
}

