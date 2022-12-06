#include<bits/stdc++.h>
using namespace std;


 vector<long long> nextSmallerElement(vector<long long> arr, int n){
        
        vector<long long>v;
        
        stack<long long>s;  // stack will contain elements in array right to current element 
        
        // will traverse arr from riht to left
        for(int i=n-1;i>=0;i--){
            
           if(s.empty()){
               v.push_back(-1);  // if stack is empty , no element in right is greater
           }
           else if(s.size()>0 && s.top()<arr[i]){
               
               v.push_back(s.top());  // if stack top contains elment greater than current element
           }
           else if(s.size()>0 && s.top()>=arr[i]){ // if top element is not greater than current 
           //element, we will pop till stack gets empty or we found greater elememnt
               
               while(s.size()>0 && s.top()>=arr[i]){
                   s.pop();
               }
               
               if(s.size()==0){
                   v.push_back(-1);
               }
               else{
                   v.push_back(s.top());
               }
           }// else if 
           
           // in end we will push current elmenet into stack before moving to next element
           s.push(arr[i]);
              
            
        }// for loop ends
        
        reverse(v.begin(),v.end());  // O(n)
        
        return v;
    }




int main(){


return 0;
}