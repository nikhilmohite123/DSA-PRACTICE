// Given an array of size N. The task is to rotate array by D elements where D ≤ N.
#include<iostream>
using namespace std;

void reverse(int *a,int s,int e){
    while(s<e){
        swap(a[s++],a[e--]);
        
    }
}
    void leftRotate(int arr[], int n, int d) {
        // code here
        d=d%n;
        if(n==1)return;
        reverse(arr,0,d-1);
        reverse(arr,d,n-1);
        reverse(arr,0,n-1);
        
    }

int main(){
    int a[5]={1,2,3,4,5};
    int d=2;
leftRotate(a,5,d);
}