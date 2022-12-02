#include<bits/stdc++.h>
using namespace std;


//-------------------------WILL NOT PASS ALL THE TEST CASES-------------------------
//----------WILL THROW TLE

void solve(vector<int> ip,vector<int> op,vector<vector<int>> &ans){
        
        // base
        if(ip.size()==0){  // if ip size becomes zero that means we have reached leaf node of ip/op tree
         //corresponding op will contain one of the answers
            sort(op.begin(),op.end());
            ans.push_back(op);
            return;
        }
        
        // creationg two ops
        vector<int>op1=op;// op1 will not contain first element of ip
        vector<int>op2=op;  
        
        op2.push_back(ip[0]);// op2 will contain the first element of ip
        
        ip.erase(ip.begin()+0); // deleting the first element of ip hence reducing the ip
        
        solve(ip,op1,ans);
        solve(ip,op2,ans);
        
        
    }
    
    
    //Function to find all possible unique subsets.
    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        vector<vector<int>> ans;
        
        vector<int> ip=arr; //vector containing int
        vector<int> op;  // empty vector
        
        solve(ip,op,ans);
        
        set<vector<int>>s;
        
        for(auto &val:ans){
            
            s.insert(val);
        }
        
        vector<vector<int>> ANS;
        
        for(auto &val:s){
            ANS.push_back(val);
        }
        
        
        
        return ANS;
    }



int main(){


return 0;
}