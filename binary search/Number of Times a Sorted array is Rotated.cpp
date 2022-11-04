#include<bits/stdc++.h>
using namespace std;

int findKRotation(int arr[], int n) {
	    // code here
	    
	    
	    
	    
	    int start=0;
	    int end=n-1;
	    
	    
	    
	    //index of min element is the number of times array is rotated
	    
	    while(start<=end){
	        
	        //edge case condition // if array is already sorted or if subarray that we 
	        //choose become sorted after moving in a particular direction
	        
	        if(arr[start]<arr[end]){
	            return start;
	        }
	        
	        int mid=start+(end-start)/2;
	        
	        int prev=(mid+n-1)%n; //index of previous element
	        
	        int next=(mid+1)%n;  //index of next element
	        
	        // min element will be less than elemnt to it's left and elemnt to it's right
	        
	        if(arr[mid]<=arr[prev] && arr[mid]<=arr[next]){
	            
	            return mid;
	        }
	        // if min elemnt not found, we need to move either to left or right
	        
	        // we move towards that side where array is unsorted cos our min element 
	        //will be there
	        
	        if(arr[start]<=arr[mid]){
	            start=mid+1;
	        }
	        else if(arr[mid]<=arr[end]){
	            end=mid-1;
	        }
	        
	        
	        
	    }
	    
	    
	    
	   
	}



int main(){


return 0;
}