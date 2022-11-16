#include<bits/stdc++.h>
using namespace std;


vector<long long > printFirstNegativeInteger( long long A[],
                                              long long N,long long K) {
                                                 
        vector<long long>v;
        
        int i=0,j=0;
        
        queue<long long>list;
        
        while(j<N){
            
            if(A[j]<0){
                list.push(A[j]);
            }
            
            if(j-i+1<K){
                j++;
            }
            else if(j-i+1==K){
                
                if(list.size()==0){
                    v.push_back(0);
                }
                else{
                    v.push_back(list.front());
                    
                    if(A[i]==list.front()){
                        list.pop();
                    }
    
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