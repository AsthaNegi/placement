#include<bits/stdc++.h>
using namespace std;

int longestKSubstr(string s, int k) {
    // your code here
    
    
    int i=0;
    int j=0;
    
    int mx=-1;
    
    unordered_map<char,int>mp;
    
    while(j<s.size()){
        
      mp[s[j]]++;
      
      if(mp.size()<k){
          j++;
      }
      else if(mp.size()==k){
          mx=max(mx,j-i+1);
          j++;
      }
      else if(mp.size()>k){
        
        while(mp.size()>k){
            mp[s[i]]--;
            if(mp[s[i]]==0){
                mp.erase(s[i]);
            }
            i++;
        }
        
        j++;
             
      }
     
        
    }// while loop ends
    
    return mx;
}




int main(){


return 0;
}