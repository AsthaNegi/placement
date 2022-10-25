#include<bits/stdc++.h>
using namespace std;

// 1: searching  //would not work for duplicate elements
// TC:nlogn  for sort function
// SC: O(1)

void print2largest1(int arr[],int n)
{
    if(n==0 || n==1){
      cout<< -1; // edge case when only one or zero element is present in array
    }

      
    sort(arr,arr+n);
    int small=arr[1];
    int large=arr[n-2];
    cout<<"Second smallest is "<<small<<endl;
    cout<<"Second largest is "<<large<<endl;
}


//searching
//TC: O(n)  two linear iterations
//SC: O(1)


void print2largest2(int arr[],int n){
    
    if(n==0 || n==1){
      cout<< -1; // edge case when only one or zero element is present in array
    }

    int small,second_small=INT_MAX;
    int large,second_large=INT_MIN;

    //first iteration for finding smallest and largest

    for(int i=0;i<n;i++){
      
      if(arr[i]<small){
        small=arr[i];
      }

      if(arr[i]>large){
        large=arr[i];
      }

    }


    // second iteration for finding second smallest and largest

    for(int i=0;i<n;i++){
      
      if(arr[i]<second_small && arr[i]!=small){
        second_small=arr[i];
      }

      if(arr[i]>second_large && arr[i]!=large){
        second_large=arr[i];
      }

    }

    cout<<second_small<<" "<<second_large;


}


//searching with smart comparisions
//TC: O(n)  single pass solution
//SC: O(1)


int print2largest3(int arr[],int n){
  
    if(n<2)
    return -1;
      int large=INT_MIN,second_large=INT_MIN;
      int i;
      for (i = 0; i < n; i++) 
      {
          if (arr[i] > large) 
          {
              second_large = large;
              large = arr[i];
          }
  
          else if (arr[i] > second_large && arr[i] != large) 
          {
              second_large = arr[i];
          }
      }
      return second_large;             
    

}





int main()
{
    int arr[]={1,2,4,6,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    print2largest3(arr,n);
    return 0;
}