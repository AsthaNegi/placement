#include<bits/stdc++.h>
using namespace std;


   
 vector<int> NSR(vector<int> arr,int n){
       
       vector<int>v;
       stack<pair<int,int>>s;
       
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
    
    
     vector<int> NSL(vector<int> arr,int n){
       
       vector<int>v;
       stack<pair<int,int>>s;
       
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
    int MAH(vector<int> arr, int n)
    {
       
       
       vector<int> NSRindex=NSR(arr,n);
       vector<int> NSLindex=NSL(arr,n);
       
       vector<int>width;
       
       for(int i=0;i<n;i++){
           
           int wid=NSRindex[i]-NSLindex[i]-1;
           
           width.push_back(wid);
       }
       
       int Max=INT_MIN;
       
       for(int i=0;i<n;i++){
          
          int Area=width[i]*arr[i];
          
          Max=max(Max,Area);
           
       }
       
       return Max;
    }
  
    
  
    int maxArea(int M[MAX][MAX], int n, int m) {
        
     vector<int>v(m);
     
     for(int j=0;j<m;j++){
         
         v[j]=M[0][j];
     }
     
     int mx=MAH(v,m);
     
     
     for(int i=1;i<n;i++){
         
         for(int j=0; j<m;j++){
            
            if(M[i][j]==0){
                v[j]=0;
            }
            else{
                v[j]=v[j]+M[i][j];
            }
             
          } // now we have a new 1d vector prepared
     
       mx=max(mx,MAH(v,m));
         
         
         
     } // row loop ends
     
     
        
     return mx;   
        
    }// function ends


int main(){


return 0;
}