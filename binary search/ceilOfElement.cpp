#include<bits/stdc++.h>
using namespace std;

int findCeil(int arr[],int n,int x){

//Ceil of x is defined as the smallest element K in arr[] such that K is larger than or equal to x.       
       int start=0;
       int end=n-1;
      
       
       while(start<=end){
           
         int mid=start+(end-start)/2;
         
         if(arr[mid]==x){
             
             return mid;  // element with same value is found at mid
         }
         
         if(arr[mid]<x){  
         //search is continued for bigger elements
            start=mid+1;
         }
         else if(arr[mid]>x){  
         // we will search for lesser elements
             end=mid-1;
         }
        
           
       }
       
       if(x<=0){
           return -1;    //No element less than 0 is found
       }
       else{
         return start;  //ceil will be present at start index after execution if element is not found
       }
        

        
}



int main(){


return 0;
}