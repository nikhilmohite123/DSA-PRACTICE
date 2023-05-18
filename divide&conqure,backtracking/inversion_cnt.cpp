#include <iostream>
using namespace std;
// Inversion Count: For an array, inversion count indicates how far
//  (or close) the array is from being sorted. If array is already sorted then 
// the inversion count is 0. If an array is sorted in the reverse order then the inversion count is the maximum. 
// Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
int merge(int *a ,int s,int e){
    int m=s+(e-s)/2;
    int l1=m-s+1;
    int l2=e-m;
    int cnt=0;
    
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
    if(left[i]>right[j]){
        cnt+=l1-i;
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



return cnt;
}





int inversion_cnt(int *a,int s,int e){
if(s>=e)return 0;


int m=s+(e-s)/2;
int inv=0;

inv+=inversion_cnt(a,s,m);
inv+=inversion_cnt(a,m+1,e);
inv+=merge(a,s,e);



return inv;



}







int main() {

    int a[5]={5,4,3,2,1};
  cout<< inversion_cnt(a,0,4)<<endl;
    for(int i=0; i<5; i++){
        cout<<a[i]<<" ";
    }
}