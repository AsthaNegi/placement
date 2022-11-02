#include<bits/stdc++.h>
using namespace std;

int search(int A[], int N){
	   
	   unordered_map<int,int>mp;
	   
	   for(int i=0;i<N;i++){
	       
	       mp[A[i]]++;
	   }
	   
	   for(auto &it:mp){
	       
	       if(it.second==1){
	           return it.first;
	       }
	   }
	    
	    
	    
}

int main(){


return 0;
}