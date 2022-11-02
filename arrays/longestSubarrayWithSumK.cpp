#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n){
    
    for(int i=0;i<n;i++){
        
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
//------------------------------------------------------------------------------------------------

//checking all possible subarrays anf their sums
//two nested loops

int longestSubarraySum1(int arr[],int n,int k){

    int MaxLength=INT_MIN;

    for(int i=0;i<n;i++){

        int sum=0;

       for(int j=i;j<n;j++){
            
              sum+=arr[j];

              if(sum==k){
                int size=j-i+1;
                  MaxLength=max(MaxLength,size);
              } 

       }

    }

    return MaxLength;

}

//TC: O(n^2)
//SC: O(1)


//-------------------------------------------------------------------------------------------

//using sliding window of variable window size
// works for positive integers only

int longestSubarraySum2(int arr[],int n,int sum){

 int maxLength=0;

 int Sum=0;

 int i=0;
 int j=0;

 while(j<n){
   
   Sum+=arr[j];

   if(Sum<sum){
     
     j++;

   }
   else if(Sum==sum){

     if(j-i+1>maxLength){
        maxLength=j-i+1; 
     }

     j++;

   }
   else if(Sum>sum){

    while(Sum>sum){
      Sum-=arr[i];
      i++;
    } 
     j++;
   }

 }


return maxLength;

}

//TC: O(2n)==O(n) since window slides forward only once therefore linear traversal
// each element is visited atmost twice, once by j then once by i 

// SC : O(1) no extra space was used

int main(){

int arr[] = {2,3,5,1,9};
int k = 10;

int arr1[] = {7,1,6,0};
int t = 7; 



printArray(arr1,4);

cout<<longestSubarraySum2(arr1,4,7);

return 0;
}