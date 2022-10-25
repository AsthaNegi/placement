#include<bits/stdc++.h>
using namespace std;



void printArray(int arr[],int n){
    
    for(int i=0;i<n;i++){
        
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}



//left rotate array elemnts by k 

//approach 1: storing first k elements in temp array

	void leftRotate1(int arr[], int k, int n) 
	{ 
	   if(n==0) return; // no elemnts in array
	   
	   k=k%n;  // in case k is more than n then index needs to be rotated
	   
	   //if(k>n) return;
	   
	   int temp[k];  // array to contain k elemnts
	   
	   for(int i=0;i<k;i++){
	       
	       temp[i]=arr[i];
	       
	   }  // storing first k elemnts in temp array
	   
	   
	   // overriding starting n-k elemnts
	   
	   for(int i=0;i<n-k;i++){
	       
	       arr[i]=arr[i+k];
	   }  
	   
	   // assigning rest k elements in the last
	   for(int i=n-k;i<n;i++){
	       
	       arr[i]=temp[i-n+k];
	   }
	   
	   
	   
	   
	   
	   
	} 
	
// 	//TC: O(n) three seperate linear traversal 
// 	//SC: O(k) since k array elemnts are stored in temp array of k size
		 



//----------------------------------------------------

//approach2: using reversal algo


	void reverseArray(int arr[],int start,int end){
    
    while(start<=end){
        
      int temp=arr[start];
      arr[start]=arr[end];
      arr[end]=temp;
        
      start++;
      end--;
    }
    
    }

	void leftRotate2(int arr[], int k, int n) 
	{    
        	 if(n==0) return;  //edge case
            
             k=k%n;  // for avoiding out of bound index
            
            //reversing first k elements of arr
            
            reverseArray(arr,0,k-1);
            
            //reversing left n-k elements of arr
            
            reverseArray(arr,k,n-1);
            
            //reversing whole array once again
            reverseArray(arr,0,n-1);
            
	  
	   
	   
	} 

//TC: O(n)  max to max traversal till n elemnts
//SC: O(1)



int main(){

int n=5;

int k=39;
    
    int arr[]={1,2,3,4,5};
    
    printArray(arr,n);
    
    leftRotate2(arr,n,k);
    
    printArray(arr,n);
    
    return 0;

return 0;
}