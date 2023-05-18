#include <iostream>
using namespace std;

void merge(int *a,int s,int e){
    int m=s+(e-s)/2;
    int l1=m-s+1;
    int l2=e-m;

// create new array for store copy element
    int *left=new int[l1];
    int *right=new int [l2];

// copy 
int k=s;
for(int i=0; i<l1; i++){
    left[i]=a[k];
    k++;
}
k=m+1;

for(int i=0; i<l2; i++){
    right[i]=a[k];
    k++;
}


int i=0,j=0,idx=s;


while(i<l1 && j<l2){
    if(left[i]>=right[j]){
        a[idx++]=right[j++];
    }
    else{
        a[idx++]=left[i++];
    }
}

while(i<l1){
    a[idx++]=left[i++];
}
while(j<l2){
    a[idx++]=right[j++];
}





//delete created  heap array


}


void mergesort(int *a,int s,int e){
    if(s==e){
        return;
    }

    int m=(s+e)/2;
    // left
    mergesort(a,s,m);

    // right
    mergesort(a,m+1,e);


    merge(a,s,e);

}
int main() {

    int a[5]={5,2,3,2,1};
    mergesort(a,0,4);
    for(int i=0; i<5; i++){
        cout<<a[i]<<" ";
    }
}
