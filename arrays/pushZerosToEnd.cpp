#include<bits/stdc++.h>
using namespace std;

void pushZerosToEnd(int arr[], int n) {
	    // code here
	    
	    int temp[n];
	    
	    int count=0;
	    
	    for(int i=0;i<n;i++){
	        
	         if(arr[i]==0){
	             
	             count++;
	         }
	    }
	    
	    int z=0;
	    
	    for(int i=0;i<n;i++){
	         
	         if(arr[i]!=0){
	           
	           arr[z]=arr[i];
	           z++;
	         }
	    }
	    
	    
	    while(count--){
	        arr[z]=0;
	        z++;
	    }
	    
	    
	    
	}


int main(){


return 0;
}