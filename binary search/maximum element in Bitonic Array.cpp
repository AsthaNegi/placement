#include<bits/stdc++.h>
using namespace std;


//biotonic arrays are ones which are are monotonically increasing and then monotonically decreasing
int maxInBiotonicArray(vector<int> &arr){


        int start=0;
        int end=arr.size()-1;

        while(start<=end){

        int mid=start+(end-start)/2;

        if(mid>0 && mid<end){  //edge cases

        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){

            return arr[mid]; // mid element is found

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
                return arr[mid];
            }
            else{
                return arr[mid+1];
            }

        }
        else if(mid==end){  // the peak element will be the one which is greater

            if(arr[end]>arr[end-1]){
                return arr[end];
            }
            else{
                return arr[end-1];
            }
        }

        }





}


int main(){


return 0;
}