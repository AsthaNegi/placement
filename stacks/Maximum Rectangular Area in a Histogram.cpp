#include<bits/stdc++.h>
using namespace std;



 vector<int> NSR(long long arr[],int n){
       
       vector<int>v;
       stack<pair<long long,int>>s;
       
       for(int i=n-1;i>=0;i--){
           
           while(s.size()>0 && s.top().first>=arr[i]){
               s.pop();
           }
           
           if(s.size()==0){
               v.push_back(n);
           }
           else{
               v.push_back(s.top().second);
           }
           
           s.push({arr[i],i});
           
    
       }
       
       reverse(v.begin(),v.end());
       
       return v;
        
        
    }
    
    
     vector<int> NSL(long long arr[],int n){
       
       vector<int>v;
       stack<pair<long long,int>>s;
       
       for(int i=0;i<n;i++){
           
           while(s.size()>0 && s.top().first>=arr[i]){
               s.pop();
           }
           
           if(s.size()==0){
               v.push_back(-1);
           }
           else{
               v.push_back(s.top().second);
           }
           
           s.push({arr[i],i});
           
    
       }
       
       
       
       return v;
        
        
    }
    
    
    
    
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
       
       
       vector<int> NSRindex=NSR(arr,n);
       vector<int> NSLindex=NSL(arr,n);
       
       vector<long long>width;
       
       for(int i=0;i<n;i++){
           
           long long wid=NSRindex[i]-NSLindex[i]-1;
           
           width.push_back(wid);
       }
       
       long long Max=LLONG_MIN;
       
       for(int i=0;i<n;i++){
          
          long long Area=width[i]*arr[i];
          
          Max=max(Max,Area);
           
       }
       
       return Max;
    }


int main(){


return 0;
}