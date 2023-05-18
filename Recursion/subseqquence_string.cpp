#include<iostream>
using namespace std;
void subseq(string& s,string output,int i){
    if(i>=s.length()-1){
        cout<<output<<endl;
        return;
    }

    // include
    subseq(s,output+s[i],i+1);


    // exclude
    subseq(s,output,i+1);
}


int main(){

string s="abc";
string output=" ";

subseq(s,output,0);







}