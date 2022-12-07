#include<bits/stdc++.h>
using namespace std;

long long trappingWater(int arr[], int n){
        
        int maxLeft[n];
        int maxRight[n];
        
        maxLeft[0]=arr[0];
        
        for(int i=1;i<n;i++){
            
            maxLeft[i]=max(maxLeft[i-1],arr[i]);
        }
        
        maxRight[n-1]=arr[n-1];
        
        for(int i=n-2;i>=0;i--){
            
            maxRight[i]=max(maxRight[i+1],arr[i]);
        }
        
        int water[n];
        
        long long sum=0;
        
        for(int i=0;i<n;i++){
            
            water[i]=min(maxRight[i],maxLeft[i])-arr[i];
            sum+=water[i];
        }
        
        return sum;
    }



int main(){


return 0;
}