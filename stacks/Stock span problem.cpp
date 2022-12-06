#include<bits/stdc++.h>
using namespace std;

 vector<int> NGLindex(int price[],int n){
        
        vector<int>v;
        
        stack<pair<int,int>>s;
        
        for(int i=0;i<n;i++){
            
            if(s.size()==0){
                v.push_back(-1);
            }
            else if(s.size()>0 && s.top().first>price[i]){
                v.push_back(s.top().second);  // index of NGL
            }
            else if(s.size()>0 && s.top().first<= price[i]){
                while(s.size()>0 && s.top().first<= price[i]){
                    
                    s.pop();// popping all smaller elmenets
                }
                
                if(s.size()==0){
                    v.push_back(-1);
                }
                else {
                    v.push_back(s.top().second);
                }
            }// else if
            
            s.push({price[i],i});
        }// for loop
        
        
        
       return v; // v will contain indexes of corresponding NGL 
        
    }
    
    
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
        vector<int>op(n);
        
        vector<int> indexes=NGLindex(price,n);
        
        // for finding size of consecutive smaller elements window 
        //just i-NGLindex
        
        for(int i=0;i<n;i++){
            
            op[i]=i-indexes[i];
        }
        
        
        return op;
    }



int main(){


return 0;
}