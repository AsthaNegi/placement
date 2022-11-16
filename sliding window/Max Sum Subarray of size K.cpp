#include<bits/stdc++.h>
using namespace std;

long maximumSumSubarray(int K, vector<int> &Arr , int N){
        
        long mx=INT_MIN;
        
        long sum=0;
        
        // if(N<K){  edge case
           
        // }
        
        int i=0;
        int j=0;
        
        while(j<N){
            
            sum+=Arr[j];
            
            if(j-i+1<K){
                j++;
            }
            else if(j-i+1==K){
                
                mx=max(mx,sum);
                sum-=Arr[i];
                i++;
                j++;
            }
            
    
        }
        
        return mx;
        
}


int main(){


return 0;
}