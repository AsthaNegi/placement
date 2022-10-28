#include<bits/stdc++.h>
using namespace std;



void printVector(vector<int> v){

   for(auto val:v){

    cout<<val<<" ";
   }
   cout<<endl;

}

//-------------------------------------------------------------------------------------------

//suing double loop
//works for unsorted input arrays

vector<int> intersectionArray1(vector<int> arr1,vector<int> arr2,int n,int m){


vector<int>intersection;

int k=0;

for(int i=0;i<n;i++){  // for n elemnts loop will run n times
  

  for(int j=k;j<m;j++){  // for m elemnts loop wil run m times

    if(arr1[i]==arr2[j]){
        intersection.push_back(arr1[i]);
        k++;
    }

  }
  

}  // m*n

return intersection;

}

// TC: O(n*m)
//SC: O(m) or O(n) whichever will be greater

//---------------------------------------------------------------------------------------------------------------------------

//using map
// works for unsorted input arrays


// we have used two maps here which is unnecessary , we have solved this using one map in another file 'intersectionOfUnsortedArrays.cpp'
vector<int> intersectionArray2(vector<int> arr1,vector<int> arr2,int n,int m){

    unordered_map<int,int> mp1;
    unordered_map<int,int> mp2;

    vector<int>intersection;

    for(auto &val:arr1){ // loop runs n times

        mp1[val]++;
    }

    for(auto &val:arr2){ // loop runs m times

        mp2[val]++;
    }


    for(int i=0;i<n;i++){ // loop runs n times

        if(mp1.count(arr1[i]) && mp2.count(arr1[i])){  // each mp.count() check can have log(n) or log(m) time, if the elemnt is found at n th or 
        //m th position
          
          intersection.push_back(arr1[i]); // have O(1) complexity
          mp1[arr1[i]]--;
          mp2[arr1[i]]--;

          if(mp1[arr1[i]]==0 ){
            mp1.erase(arr1[i]);//   log(n), if the elemnt is found at nth position
          }


          if(mp2[arr1[i]]==0){
            mp2.erase(arr1[i]);  // log(m) if the lemnt is found at m th position
           }

         
        }


    }

    
return intersection;


}

//TC: n*log(n) or have n* log(m) whichever is greater


//------------------------------------------------------------------------

//two pointers
// works for sorted input arrays
// better time complexity

vector<int> intersectionArray3(vector<int> arr1, vector<int> arr2,int n,int m){

    vector<int> ans;

    int i=0;
    int j=0;

    while(i<n && j<m){
      
      if(arr1[i]==arr2[j]){
        ans.push_back(arr1[i]);
        i++;
        j++;
      }
      else if(arr1[i]<arr2[j]){
        i++;  //pointer at smaller element will move ahead
      }
      else{ // arr2[j]< arr1[i]
        j++;  
      }


    }



    return ans;


}

//TC: O(m) or O(n) whichever is smaller
// SC: O(m) or O(n) which ever is greater for vector ans


int main(){

    // duplicates in answer allowed
    vector<int> arr1={3,3,5,6,9};
    int n=5;
    vector<int> arr2={3,3,6,17,20,25};
    int m=6;

    printVector(arr1);
    printVector(arr2);

    vector<int> ans= intersectionArray3(arr1,arr2,arr1.size(),arr2.size());

    printVector(ans);



return 0;
}