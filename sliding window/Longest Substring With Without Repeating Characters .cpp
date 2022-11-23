#include<bits/stdc++.h>
using namespace std;
    
//-------------------------------------------------------
//using sliding window
// won't run for all the test cases (will throw time limit exceeded error)
int longestUniqueSubsttr1(string S){
        //code
        
        int mx=-1;
        
        int i=0;
        int j=0;
        
        unordered_map<char,int>mp;
        
        while(j<S.size()){
            
            mp[S[j]]++;
            
            if(mp.size()==j-i+1){
                
                mx=max(mx,j-i+1);
                j++;
                
            }
            else if(mp.size()<j-i+1){
                
                while(mp.size()<j-i+1){
                    mp[S[i]]--;
                    if(mp[S[i]]==0){
                        mp.erase(S[i]);
                    }
                    i++;
                }
                j++;
                
            }
            
            
            
        }
        
        return mx;
        
}

//-----------------------------------------------------------------------------------------------
// would use hashing 
// would improve time complexicity and will work for all test cases

int longestUniqueSubsttr2(string S){
        //code
        //code
        vector<int> freq(26, 0);
        int j = 0;
        int mx = 0;
        for (int i = 0 ; i < S.size() ; i++){
            
            freq[S[i]-'a']++;
            
            if (freq[S[i]-'a'] > 1){
                
                while (S[j]!=S[i] ){
                    
                    freq[S[j]-'a']--;
                    j++;
                }
                
                //when S[j]==S[i] but still we need to move one step ahead 
                freq[S[j]-'a']--;
                j++;    
                
                
            }  // if freq >1
            
            mx = max(mx, i-j+1);
        }
        return mx;
        
}



    int main(){
    
    
    return 0;
    }
    
