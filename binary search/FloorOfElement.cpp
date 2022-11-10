#include<bits/stdc++.h>
using namespace std;


// Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
int findFloor(vector<long long> arr, long long n, long long x){

//Floor of x is defined as the largest element K in arr[] such that K is smaller than or equal to x.       
       long long start=0;
       long long end=n-1;
      
       
       while(start<=end){
           
         long long mid=start+(end-start)/2;
         
         if(arr[mid]==x){
             
             return mid;  // element with same value is found at mid
         }
         
         if(arr[mid]<x){  
         //search is continued for bigger elements
            start=mid+1;
         }
         else if(arr[mid]>x){  // not a possible candidate
         // we will search for lesser elements
             end=mid-1;
         }
        
           
       }
       
       if(x<=0){
           return -1;    //No element less than 0 is found
       }
       else{
         return end;  //floor will be present at end after execution if element is not found
       }
        

        
}


int main(){


return 0;
}