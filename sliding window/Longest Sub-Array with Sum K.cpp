#include<bits/stdc++.h>
using namespace std;


//-----------------------------------------------------------------------
//using hashmap(not sliding window)
// will work for negative numbers as well


int lenOfLongSubarr2(int arr[],  int n, int k) 
{   
       
        unordered_map<int,int>mp;
        
        mp[0]=-1;
        
        long long sum=0;
        
        int mx=0;
        
        for(int i=0;i<n;i++){
            
            sum+=arr[i];
            
            if(mp.count(sum-k)){
                
                mx=max(mx,i-mp[sum-k]);
            }
            
            if(mp.find(sum)==mp.end()){
                mp[sum]=i;
            }
            
        }
        
        return mx;
        
        
} 



//-----------------------------------------------------------------------------
// using sliding window
// will not work for positive numbers

int lenOfLongSubarr1(int arr[],  int n, int k) 
{ 

    int i=0;
    int j=0;

    long long sum=0;

    int mx=0;

    while(j<n){

      sum+=arr[j];

      if(sum<k){
        j++;
      }
      else if(sum==k){

        mx=max(mx,j-i+1);
        j++;
      }
      else if(sum>k){

        while(sum>k){
           sum-=arr[i];
            i++;
           if(sum==k){
            mx=max(mx,j-i+1);
           }
          
        }
        j++;
      }


    }
       
    return mx;    
        
        
} 








int main(){


return 0;
}