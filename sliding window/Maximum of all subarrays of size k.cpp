#include<bits/stdc++.h>
using namespace std;


vector <int> max_of_subarrays(int *arr, int n, int k)
{
       vector<int>v;
        
        int i=0,j=0;
        
        deque<int>list;
        
        while(j<n){
            
            while(list.size()>0 && list.back()<arr[j]){
                
                 list.pop_back();
                
            }
            
            list.push_back(arr[j]);
            
           if(j-i+1<k){
               
               j++;
           } 
           else if(j-i+1==k){
               
               v.push_back(list.front());
               
               if(arr[i]==list.front()){
                   
                   list.pop_front();
               }
               
               i++;
               j++;
               
                  
               
           }
            
            
        }
        
        
        return v;
}


int main(){


return 0;
}