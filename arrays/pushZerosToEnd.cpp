#include<bits/stdc++.h>
using namespace std;



void printArray(int arr[],int n){
    
    for(int i=0;i<n;i++){
        
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

void pushZerosToEnd1(int arr[], int n) {
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

//TC: O(n)
//SC: O(1)


//----------------------------------------------------------------------------------

//swapping the occurences of zeros with non negative integers

void pushZerosToEnd2(int arr[],int n ){
     
	 int i=0;

	 while(i<n){
       
	   if(arr[i]==0){
		break;
	   }
	   else{
		i++;
	   }

	 }// finding first occurence of zero in array


	int j=i+1; // a pointer standing next to i 

	while(j<n){
      
	  if(arr[j]!=0){

		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
        i++;
	  }
	  
      j++;
	   


	}



}



int main(){

	int n=7; 
   
    
    int arr[]={1,2,0,3,4,0,5};
    
    printArray(arr,n);
    
    pushZerosToEnd2(arr,n);
    
    printArray(arr,n);
    


return 0;
}