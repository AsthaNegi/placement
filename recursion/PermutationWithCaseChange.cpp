      
       //---------------permutationWithCaseChange----------



#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(string op,string ip){
 
     if(ip.length()==0){
         
         cout<<op<<",";
         
         return;
         
     } 
     
     string op1=op;
    
     string op2=op;
     
     op1.push_back(ip[0]);   // lowercase
     op2.push_back(toupper(ip[0])); // conversion to uppercase
     
     ip.erase(ip.begin()+0);
     
     solve(op1,ip);
     
     solve(op2,ip);
     
     
     
 
 
    
    
    
}

int main()
{
    string ip;
    cin>>ip;
    
    string op="";
    
    solve(op,ip);
    
    

    return 0;
}

 
