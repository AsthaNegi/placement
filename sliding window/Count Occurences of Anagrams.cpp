#include<bits/stdc++.h>
using namespace std;

int search(string pat, string txt) {
	    
	    int ans=0;
	    
	    int k=pat.size(); // window size
	    
	    unordered_map<char,int>mp;
	    
	    for(int i=0;i<pat.size();i++){
	        mp[pat[i]]++;
	    }
	    
	    int count=mp.size();
	    
	    int i=0,j=0;
	    
	    while(j<txt.size()){
	        
	        
	        if(mp.count(txt[j])){
	            mp[txt[j]]--;
	            
	            if(mp[txt[j]]==0){
	               count--; 
	            }
	        } // calculations
	        
	        if(j-i+1<k){
	            j++;   // when window size is not hit
	        }
	        else if(j-i+1==k){
	            
	            if(count==0){
	                ans++;  // conditions for anagrams are met
	            }
	            
	            // sliding the window
	            if(mp.count(txt[i])){
	                mp[txt[i]]++;
	                
	                if(mp[txt[i]]==1){  // handling adding back txt[i]
	                    count++;
	                }
	            }
	            
	            
	            //sliding
	            i++;
	            j++;
	            
	            
	            
	        }// else if ends
	        
	    }// while loop ends
	    
	     return ans;
	    
	    
}




int main(){


return 0;
}