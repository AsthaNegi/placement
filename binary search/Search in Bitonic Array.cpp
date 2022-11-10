#include<bits/stdc++.h>
using namespace std;

int maxInBiotonicArray(vector<int> &arr){

        int start=0;
        int end=arr.size()-1;

        while(start<=end){

        int mid=start+(end-start)/2;

        if(mid>0 && mid<end){  //edge cases

        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){

            return mid; // mid element is found

        }
        else if(arr[mid-1]>arr[mid]){ // we will move towards the side where greater element is present
            end=mid-1;
            }
            else if(arr[mid+1]>arr[mid]){
                start=mid+1;
            }

        }
        else if(mid==0){ // the peak element will be the one which is greater
            
            if(arr[mid]>arr[mid+1]){
                return mid;
            }
            else{
                return mid+1;
            }

        }
        else if(mid==end){  // the peak element will be the one which is greater

            if(arr[mid]>arr[mid-1]){
                return mid;
            }
            else{
                return mid-1;
            }
        }

        }

}


int binarySearchAscending(vector<int> &v,int start,int end,int x){


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



int binarySearchDescending(vector<int> &v,int start,int end,int x){



while(start<=end){
 
 int mid=start+(end-start)/2; // to avoid overflow
 
 if(v[mid]==x){
   
   return mid;
 }
 else if(x<v[mid]){
   start=mid+1;
 }
 else if(x>v[mid]){
    end=mid-1;
 }

}

return -1;

}



int searchInBiotonic(vector<int> &arr, int x) {
    
 int start=0;
 int end=arr.size()-1;    
    
 int peakIndex=maxInBiotonicArray(arr); 
 
 // now we have ascending sorted array from index 0 to peakIndex-1
 
 int a=binarySearchAscending(arr,start,peakIndex-1,x);
 
 // now we have descending sorted array from peakIndex to end
  
 int b=binarySearchDescending(arr,peakIndex,end,x); 
 
 if(a==-1 && b==-1){
     return -1;    // if element is not found in any of the two array
 }
 else{
     
     if(a==-1){
         return b;  // if element is found at b
     }
     else{
         return a;// if element is found at a
     }
 }
        

}




int main(){


vector<int>A = {3, 9, 10, 20, 17, 5, 1};
 int B = 20;

int index=searchInBiotonic(A,B); 

cout<<index;

return 0;
}