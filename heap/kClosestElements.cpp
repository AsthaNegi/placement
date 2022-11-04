#include<bits/stdc++.h>
using namespace std;

vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        // code here
        
        vector<int>v;
        
        // max heap since we want to store min elements 
        priority_queue<pair<int,int>>maxh;
        
        for(int i=0;i<n;i++){
            
            if(abs(arr[i]-x)!=0){
                 maxh.push({abs(arr[i]-x),arr[i]});
            }
           
            
            if(maxh.size()>k){
                maxh.pop();
            }
        }
        
        
        while(maxh.size()>0){
            
            pair<int,int>pp=maxh.top();
            
            v.push_back(pp.second);
            
            maxh.pop();
        }       
        
        return v;
    }

int main(){


return 0;
}