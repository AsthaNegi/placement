#include<bits/stdc++.h>
using namespace std;


//two traversals
//comparing a element with all it's future elements
//TC: O(n^2)
//SC: O(1)

bool arraySortedOrNot1(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[i])
        return false;
    }
  }

  return true;
}


// making another array and sorting that
//TC: O(n)
//SC:O(n) 
bool arraySortedOrNot2(int arr[], int n) {
        // code here
        
        int temp[n];
        
        for(int i=0;i<n;i++){
            temp[i]=arr[i];
        }
        
        sort(temp,temp+n);
        
        bool flag=true;
        
        for(int i=0;i<n;i++){
            
            if(arr[i]!=temp[i]){
                flag=false;
                break;
            }
        }
        
        return flag;
        
        
        
    }




///checking with next element is greater or equal to previous element
//TC:O(n)  one traversal
//SC: O(1)  no extra space used

bool arraySortedOrNot3(int arr[], int n) {
        // code here
        
        bool flag=true;
        
        
        for(int i=0;i<n-1;i++){
            
            if(arr[i+1]>=arr[i]){
                continue;
            }
            else{
                flag=false;
                break;
            }
            
        }
        
        return flag;
        
        
        
    }



int main(){

    int arr[]={1,2,4,6,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<arraySortedOrNot1(arr,n);
     return 0;


return 0;
}