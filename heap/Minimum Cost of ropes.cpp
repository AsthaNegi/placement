#include<bits/stdc++.h>
using namespace std;


long long minCost(long long arr[], long long n) {
        
        // cost to connect the ropes is minimum when two ropes of smallest lengths 
        //are connected
        
        long long cost=0;
        
        // min heap so min size will appear at top
        
        priority_queue<long long,vector<long long>,greater<long long>>minh;
        
        for(int i=0;i<n;i++){
            
            minh.push(arr[i]);
        } // all elements will be in min heap and top most element will be smallest length rope
        
        
        while(minh.size()>=2){  // we need atleast two ropes to add them
            
             long long first=minh.top();
             minh.pop();
             
             long long second=minh.top();
             minh.pop();
             
             cost+=(first+second);  // cost of adding two ropes will be added to total cost
             
             // now that new rope is added to the minh
             
             minh.push(first+second);
            
        }
        
        
        
        return cost;
}




int main(){


return 0;
}