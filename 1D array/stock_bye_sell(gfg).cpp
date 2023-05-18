// This function finds the buy sell schedule for maximum profit
#include<iostream>
using namespace std;


void stockBuySell(int price[], int n) {
    int start = 0, end = 0;
    bool noProfit = true;
    for(int i = 0; i < n-1; i++){
        if(price[i] > price[i+1]){
            end = i;
            if(start != end){
                cout<<"("<<start<<" "<<end<<")"<<" ";
                noProfit = false;
            }
            start = i+1;
        }
    }
    
    if(price[n-2] < price[n-1]){
        end = n-1;
        cout<<"("<<start<<" "<<end<<")"<<" ";
        noProfit = false;
    }
    
    if(noProfit){
        cout<<"No Profit";
    }
    
    cout<<endl;
}