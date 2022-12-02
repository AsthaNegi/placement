#include<bits/stdc++.h>
using namespace std;

void solve(string ip,string op,vector<string> &ans){
       
     // base
     if(ip.size()==0){
         
         ans.push_back(op);
         return;
     }
     
     string op1=op;
     string op2=op;
     
     op1.push_back(' ');
     op1.push_back(ip[0]); // with space
     
     op2.push_back(ip[0]);  // without space
     
     ip.erase(ip.begin()+0);
     
     solve(ip,op1,ans);
     solve(ip,op2,ans);
    
       
       
   }



    vector<string> permutation(string S){
        
        string ip=S;
        
        string op="";
        op.push_back(ip[0]);  //first element without space
        
        ip.erase(ip.begin()+0);  // deleting first element from ipnput
        
        vector<string>ans;
        
        solve(ip,op,ans);
        
        return ans;
        
        
        
    }



int main(){


return 0;
}