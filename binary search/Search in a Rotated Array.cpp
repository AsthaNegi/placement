#include<bits/stdc++.h>
using namespace std;


//-------------------------------------------
int findMinIndex(int arr[], int n) {
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
	        
	        if(arr[mid]<arr[prev] && arr[mid]<arr[next]){
	            
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
	
	
    	
    int binarySearch(int v[],int s,int e,int x){
    
    
    int start=s;
    int end=e;
    
    while(start<=end){
     
     int mid=start+(end-start)/2; // to avoid overflow
     
     if(v[mid]==x){
       
       return mid;
     }
     else if(x<v[mid]){
        end=mid-1;
     }
     else if(x>v[mid]){
        start=mid+1;
     }
    
    }
    
    return -1;
    
    }
    
    
    int searchInRotated(int A[], int l, int h, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        
        //complete the function here
        
        int n=h-l+1;
        
        int mini=findMinIndex(A,n); // index of minimum element
        
        // sub array right and left to min element are sorted
        
        
        // BS on subarrays seperately 
        
        int first=binarySearch(A,l,mini-1,key);  // one of them will return index of key
        
        int second=binarySearch(A,mini,h,key); // if key is not found in both arrays ,
        //both will rturn -1
        
        int index=-1;
        
        if(first!=-1 ){  
            index=first;
        }
        
        if(second!=-1){
            index=second;
        }
        
        return index;
        
    }


int main(){


return 0;
}