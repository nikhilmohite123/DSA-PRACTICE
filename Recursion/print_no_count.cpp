
#include<iostream>
using namespace std;

// print counting form n to 1;

void printcounting(int n){
    // base case
if(n==0){
    return;
}
// pressesing
cout<<n<<endl;

// recurrsive call
printcounting(n-1);




}


// print count 1 to n

void printcountingfrom1(int n){
       // base case
if(n==0){
    return;
}


// recurrsive call
printcountingfrom1(n-1);


// pressesing
cout<<n<<endl;


}
int main(){
    int n;
    cin>>n;

    printcounting(n);
    cout<<endl;
    printcountingfrom1(n);
}