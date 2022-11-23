       //----------all unique subsets of a string----------

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void solve(string op,string ip,set<string> &s){
    
    
    // base
    
    if(ip.length()==0){  // when input will become blanck string then output is recieved
    
        
        s.insert(op);
        return;
    }
    // each input generates two outputs
    
    string op1=op;  // op1 is same as ip
    
    string op2=op;   
    
    // op2 will include char at 0 index of ip
    op2.push_back(ip[0]);
    
    // then ip is made smaller by erasing char at 0 index
    ip.erase(ip.begin()+0);
    
    // function is called again for op1 and op2
    solve(op1,ip,s);
    solve(op2,ip,s);
    
}

int main()
{
    string ip;
    cout<<"enter your string:"<<endl;
    cin>>ip;
    
    // initial op is taken as blank
    string op=" ";
    
    set<string>s;
    
    cout<<"outputs:"<<endl;
    
    solve(op,ip,s);
    
    for( auto &str:s){
        
        cout<<str<<",";
        
    }
    

    return 0;
}
