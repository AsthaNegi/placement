#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> v){

   for(auto val:v){

    cout<<val<<" ";
   }
   cout<<endl;

}

//--------------------------------------------------------------------------------------------------
// using set : all elemnts are unique and ordered
// works for unsorted input arrays as well

vector<int> unionArray1(vector<int> arr1,vector<int> arr2,int n,int m){


    vector<int>ans;

    set<int>s;//set holds unique values in ordered manner


    //storing elemnts from arr1 of size n
    for(auto &val:arr1){   
        s.insert(val); // log(n) for each insertion 
    } // loop runs n times so overall TC : nlog(n)
    

     //storing elemnts from arr2 of size m
    for(auto &val:arr2){  
        s.insert(val); // log(m) for each insertion
    } // loop runs m times so TC: mlog(m)

   //storing all elements from set to vector ans
    for(auto &val:s){
        ans.push_back(val);
    }

    return ans;

}


//TC: (m+n)log(m+n)  set can be max of m+n size then insertion of m+n th would take log(m+n) time, and the insertions for m+n elements would happen in approx m+n time so (m+n)log(m+n)
//SC:   O(2*(m+n))==O(m+n)      O(m+n) for set of size m+n and another m+n for vector of size m+n


//---------------------------------------------------------------------------------------------------

//using two pointers
// works for sorted input arrays

vector<int> unionArray2(vector<int> arr1,vector<int> arr2,int n,int m){

int i=0; // for pointing elemnets of arr1
int j=0; // for pointing elements of arr2

vector<int> ans;

// will continue the loop till one of the pointers reach the end

while(i<n && j<m){
  
if(arr1[i]<=arr2[j]){
   
   // we will have to check if arr1[i] element is not present already in ans since we want to avoid duplicates
   if(ans.size()==0 || ans.back()!=arr1[i]){

    ans.push_back(arr1[i]);
   }

   i++;

}
else{ // if arr1[i]> arr2[j]
   
   // we will have to check if arr2[j] element is not present already in ans since we want to avoid duplicates
   if(ans.size()==0 || ans.back()!=arr2[j]){
    ans.push_back(arr2[j]);
   }
   j++;

}  

} //while loop ends


while(i<n){ // if there are any elemnts left in arr1 or if arr1 is the only array containing elemnts

    if(ans.size()==0 || ans.back()!=arr1[i]){
        ans.push_back(arr1[i]);
    }
    i++;
}

while(j<m){ // if there are any elemnts left in arr2 or if arr2 is the only array containing elemnts

    if(ans.size()==0 || ans.back()!=arr2[j]){
        ans.push_back(arr2[j]);
    }
    j++;
}



return ans;



}

//TC: O(m+n) cos i runs n times and j runs m times
//SC: O(m+n) union vector of size m+n


int main(){

    vector<int> arr1={2,3,5,6,9};
    int n=5;
    vector<int> arr2={3,4,6,17,20,25};
    int m=6;

    printVector(arr1);
    printVector(arr2);

    vector<int> ans= unionArray2(arr1,arr2,arr1.size(),arr2.size());

    printVector(ans);

return 0;
}