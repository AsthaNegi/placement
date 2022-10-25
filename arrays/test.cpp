  
//**************************************************************
// 1: rotate left array by one

// #include <bits/stdc++.h>

// using namespace std;


// void printArray(int arr[],int n){
    
//     for(int i=0;i<n;i++){
        
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
    
// }


// //-----------------------------------------------------------------
// //approach 1:overriding elements by making an extra space


// void rotateLeft1(int arr[],int n){
    
//     int arr2[n];
    
//     int temp=arr[0];
    
//     for(int i=1;i<n;i++){
//         arr2[i-1]=arr[i];
//     }
    
//     arr2[n-1]=temp;
    
//     for(int i=0;i<n;i++){
        
//         arr[i]=arr2[i];
//     }
    
    
// }

// //tc: O(n) two seperate traversals
// //SC: O(n) an sxtra array of n elements



// //------------------------------------------------------------
// //approach 2: by overriding elements

// void rotateLeft2(int arr[],int n){
    
//     int temp=arr[0];
    
//     for(int i=1;i<n;i++){
//         arr[i-1]=arr[i];
//     }
    
//     arr[n-1]=temp;
    
    
// }

// // TC: O(n) single traversal
// // SC: O(1)




// int main()
// {
//     int n=5;
    
//     int arr[]={1,2,3,4,5};
    
//     printArray(arr,n);
    
//     rotateLeft2(arr,n);
    
//     printArray(arr,n);
    
//     return 0;
// }

//**************************************************************
//left rotate array elemnts by k 

//approach 1: storing first k elements in temp array

// 	void leftRotate1(int arr[], int k, int n) 
// 	{ 
// 	   if(n==0) return; // no elemnts in array
	   
// 	   k=k%n;  // in case k is more than n then index needs to be rotated
	   
// 	   //if(k>n) return;
	   
// 	   int temp[k];  // array to contain k elemnts
	   
// 	   for(int i=0;i<k;i++){
	       
// 	       temp[i]=arr[i];
	       
// 	   }  // storing first k elemnts in temp array
	   
	   
// 	   // overriding starting n-k elemnts
	   
// 	   for(int i=0;i<n-k;i++){
	       
// 	       arr[i]=arr[i+k];
// 	   }  
	   
// 	   // assigning rest k elements in the last
// 	   for(int i=n-k;i<n;i++){
	       
// 	       arr[i]=temp[i-n+k];
// 	   }
	   
	   
	   
	   
	   
	   
// 	} 
	
// 	//TC: O(n) three seperate linear traversal 
// 	//SC: O(k) since k array elemnts are stored in temp array of k size
		 



//----------------------------------------------------

//approach2: using reversal algo


// 	void reverseArray(int arr[],int start,int end){
    
//     while(start<=end){
        
//       int temp=arr[start];
//       arr[start]=arr[end];
//       arr[end]=temp;
        
//       start++;
//       end--;
//     }
    
//     }

// 	void leftRotate(int arr[], int k, int n) 
// 	{    
//         	 if(n==0) return;  //edge case
            
//              k=k%n;  // for avoiding out of bound index
            
//             //reversing first k elements of arr
            
//             reverseArray(arr,0,k-1);
            
//             //reversing left n-k elements of arr
            
//             reverseArray(arr,k,n-1);
            
//             //reversing whole array once again
//             reverseArray(arr,0,n-1);
            
	  
	   
	   
// 	} 

//TC: O(n)  max to max traversal till n elemnts
//SC: O(1)
	

//*************************************************************************

//rotate array k elemnts by right

//Approach 1: storing last k elemnts in temp array

// void rotateRight1(int arr[],int n,int k){
    
//     if(n==0) return ;
    
//     k=k%n; // for avoiding segmentation fault of index
    
//     int temp[k]; // for storing k elements 
    
//     for(int i=n-k;i<n;i++){
        
//         temp[i-n+k]=arr[i];
        
//     } // storing last k elemnts in first k indexes of temp array
    
    
//   for(int i=n-k-1;i>=0;i--){
       
//       arr[i+k]=arr[i];
       
//   } // shifting first n-k elemnts to the right from the last
   
   
    
//   for(int i=0;i<k;i++){
       
//       arr[i]=temp[i];
//   } //storing k elemnts of k(initionally last k elemnts of arr) into starting k indexes of arr

    
// }

//TC: O(n) linear traversals
// SC: O(k) temp array of k size to store the last k elemnts of arr


//-----------------------------------------------------

//approach2: by reversal algo

// void reverseArray(int arr[],int start,int end){
    
//     while(start<=end){
        
//       int temp=arr[start];
//       arr[start]=arr[end];
//       arr[end]=temp;
        
//       start++;
//       end--;
//     }
    
// }

// void rotateRight2(int arr[],int n,int k){
    
//     if(n==0) return;
    
//      k=k%n;
    
//     //reversing last k elements of arr
    
//     reverseArray(arr,n-k,n-1);
    
//     //reversing first n-k elements of arr
    
//     reverseArray(arr,0,n-k-1);
    
//     //reversing whole array once again
//     reverseArray(arr,0,n-1);
    
// }



// int main()
// {
//     int n=5; 
//     int k=38;
    
//     int arr[]={1,2,3,4,5};
    
//     printArray(arr,n);
    
//     rotateRight2(arr,n,k);
    
//     printArray(arr,n);
    
//     return 0;
// }

//TC: O(n) 
//SC: O(1)

	
	
	
	void reverseArray(int arr[],int start,int end){
    
    while(start<=end){
        
      int temp=arr[start];
      arr[start]=arr[end];
      arr[end]=temp;
        
      start++;
      end--;
    }
    
    }

	void leftRotate(int arr[], int k, int n) 
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
	
	

