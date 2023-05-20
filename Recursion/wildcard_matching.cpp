
// Given an input string (s) and a pattern (p), implement wildcard pattern matching with support for '?' and '*' where:

// '?' Matches any single character.
// '*' Matches any sequence of characters (including the empty sequence).
// The matching should cover the entire input string (not partial).




// https://leetcode.com/problems/wildcard-matching/  



#include <iostream>
#include<string>
using namespace std;

bool wildcardmatcher(string &s,int si,string &p,int pi){
    if(pi==p.size() && si==s.size())return true;

    if(si>=s.size()&& pi<p.size()){
        while(pi<p.size()){
            if(p[pi]!='*')return false;
            pi++;
        }
        return true;
    }

    // simple 
    if(s[si]==p[pi] || p[pi]=='?'){
        return wildcardmatcher(s,si+1,p,pi+1);
    }

    if(p[pi]=='*'){
        bool a=wildcardmatcher(s,si,p,pi+1);
        bool b=wildcardmatcher(s,si+1,p,pi);

        return a||b;
    }
    return false;

}
int main() {
 string s="a1111111";
 string p="*";

cout<<wildcardmatcher(s,0,p,0);


}
