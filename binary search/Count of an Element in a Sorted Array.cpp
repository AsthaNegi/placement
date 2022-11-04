#include<bits/stdc++.h>
using namespace std;

    
        int firstOccurence(int v[],int n,int x){
        
        
        int start=0;
        int end=n;
        
        int index=-1;
        
        while(start<=end){
         
         int mid=start+(end-start)/2; // to avoid overflow
         
         if(v[mid]==x){
           
           index=mid;
           end=mid-1;
         }
         else if(x<v[mid]){
            end=mid-1;
         }
         else if(x>v[mid]){
            start=mid+1;
         }
        
        }
        
        return index;
        
        }
        
        int lastOccurence(int v[],int n,int x){

            
            int start=0;
            int end=n-1;
            
            int index=-1;
            
            while(start<=end){
             
             int mid=start+(end-start)/2; // to avoid overflow
             
             if(v[mid]==x){
               
               index=mid;
               start=mid+1;
             }
             else if(x<v[mid]){
                end=mid-1;
             }
             else if(x>v[mid]){
                start=mid+1;
             }
            
            }
            
            return index;
            
        }
		
		
		
	int count(int arr[], int n, int x) {
	    // code here
	    
	    int first=firstOccurence(arr,n,x);
	    int last=lastOccurence(arr,n,x);
	    
	    int count ;
	    
	    if(first!=-1 && last!=-1){
	        
	         count=last-first+1;
	    }
	    else{
	        count =0;
	    }
	    
	    
	    
	    return count;
	}


int main(){


return 0;
}