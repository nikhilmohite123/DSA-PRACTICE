#include <iostream>
#include<algorithm>
#include<string>
using namespace std;


string solve(string& s1,string& s2,int p1,int p2,int carray=0){

if(p1<0 && p2<0){
    if(carray!=0){


        return string(1,carray+'0');
    }
    return "";
}

int n1=(p1>=0 ?s1[p1]:'0')-'0';
int n2=(p2>=0 ? s2[p2]:'0')-'0';
int sum=n1+n2+carray;
char ch=(sum%10)+'0';
string ans=solve(s1,s2,p1-1,p2-1,sum/10)+ch;


return ans;


}





int main() {
   string s="123";
   string s2="3311";



  string ans=solve(s,s2,s.length()-1,s2.length()-1,0);
//   reverse(ans.begin(),ans.end());
  cout<<ans;
}
