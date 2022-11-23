#include<bits/stdc++.h>
using namespace std;

string smallestWindow (string s, string t)
    {
        int i=0,j=0,MinL=INT_MAX,start=0;
        unordered_map<char,int> mp;
        
        for(auto val:t){
            mp[val]++;
        }
            
        int count=mp.size();
        
        if(mp.find(s[j])!=mp.end()){  // element at j is found
            mp[s[j]]--;
            if(mp[s[j]]==0)
                count--;
        }
        
        while(j<s.length()){
            if(count>0){
                j++;
                if(mp.find(s[j])!=mp.end()){ // element at j is found
                    mp[s[j]]--;
                    if(mp[s[j]]==0)
                    count--;
                }
            }
            else if(count==0){
                // MinL=min(MinL,j-i+1);
                if(MinL>j-i+1){
                    MinL=j-i+1;
                    start=i;
                }
                while(count==0){
                    if(mp.find(s[i])!=mp.end()){  // element is fount at i index
                        mp[s[i]]++;
                        if(mp[s[i]]==1){
                            count++;
                            // MinL=min(MinL,j-i+1);
                             if(MinL>j-i+1){
                                MinL=j-i+1;
                                start=i;
                            } 
                        }
                        i++;
                    }
                    else
                        i++; // if element is not fount at i index, simply move ahead
                        
                } // inner while count==0
                
            }//else if count ==0
            
        }// while loop
        
        
        string str="";
        if(MinL!=INT_MAX)
            return str.append(s.substr(start,MinL));
        else
            return "-1";
        
        
    } // function



int main(){


return 0;
}