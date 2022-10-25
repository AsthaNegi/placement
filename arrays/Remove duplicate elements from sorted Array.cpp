#include<bits/stdc++.h>
using namespace std;

/////////////---------------------------------------------
//using hashset

// Output: The array after removing duplicate elements is 1 2 3

// Time complexity: O(n*log(n))+O(n)

// Space Complexity: O(n) 


int removeDuplicates(int arr[], int n) {
  set < int > set;
  for (int i = 0; i < n; i++) {
    set.insert(arr[i]); //logn for each insertion
  }// n*logn since insertion happened n times 

  int k = set.size();
  int j = 0;

  for (int x: set) {
    arr[j++] = x;  
  }  //O(n) one traversal 
  return k;
}


//----------------------------------------------------------
//uing two pointers

int removeDuplicates2(int arr[],int n){


if(n <=1){
    return n; //edge cases
}    

int low=0,high=1;

while(high<n){

if(arr[low]!=arr[high]){
   
   low++;
   arr[low]=arr[high];

}

high++;

}

return low+1;


}

// Time complexity: O(n) since single traversal

// Space Complexity: O(1)


int main() {
  int arr[] = {1,1,2,2,2,3,3};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = removeDuplicates2(arr, n);
  cout << "The array after removing duplicate elements is " << endl;
  for (int i = 0; i < k; i++) {
    cout << arr[i] << " ";
  }
}




