#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n){
    
    for(int i=0;i<n;i++){
        
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}


//rotate array k elemnts by right

//Approach 1: storing last k elemnts in temp array

void rotateRight1(int arr[],int n,int k){
    
    if(n==0) return ;
    
    k=k%n; // for avoiding segmentation fault of index
    
    int temp[k]; // for storing k elements 
    
    for(int i=n-k;i<n;i++){
        
        temp[i-n+k]=arr[i];
        
    } // storing last k elemnts in first k indexes of temp array
    
    
  for(int i=n-k-1;i>=0;i--){
       
      arr[i+k]=arr[i];
       
  } // shifting first n-k elemnts to the right from the last
   
   
    
  for(int i=0;i<k;i++){
       
      arr[i]=temp[i];
  } //storing k elemnts of k(initionally last k elemnts of arr) into starting k indexes of arr

    
}

//TC: O(n) linear traversals
// SC: O(k) temp array of k size to store the last k elemnts of arr


//-----------------------------------------------------

//approach2: by reversal algo

void reverseArray(int arr[],int start,int end){
    
    while(start<=end){
        
      int temp=arr[start];
      arr[start]=arr[end];
      arr[end]=temp;
        
      start++;
      end--;
    }
    
}

void rotateRight2(int arr[],int n,int k){
    
    if(n==0) return;
    
     k=k%n;
    
    //reversing last k elements of arr
    
    reverseArray(arr,n-k,n-1);
    
    //reversing first n-k elements of arr
    
    reverseArray(arr,0,n-k-1);
    
    //reversing whole array once again
    reverseArray(arr,0,n-1);
    
}









int main(){

int n=5;

int k=2;
    
    int arr[]={1,2,3,4,5};
    
    printArray(arr,n);
    
    rotateRight2(arr,n,k);
    
    printArray(arr,n);
    
    return 0;

return 0;
}

