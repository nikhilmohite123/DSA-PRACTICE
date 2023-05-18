
#include<iostream>
using namespace std;


void print_digit(int n){

if(n==0){
    return;
}

int lastdigit=n%10;
// cout<<lastdigit<<" ";

print_digit(n/10);
cout<<lastdigit<<" ";


}


int main(){

int n;
cin>>n;


print_digit(n);

}


