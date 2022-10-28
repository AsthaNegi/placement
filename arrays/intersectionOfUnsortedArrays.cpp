#include<bits/stdc++.h>
using namespace std;


void printVector(vector<int> v){

   for(auto val:v){

    cout<<val<<" ";
   }
   cout<<endl;

}



// no duplicates are allowed in ans of this problem
vector<int> intersectionArray1(vector<int> a, vector<int> b, int n, int m) {
        // Your code goes here
        

        vector<int>ans;
        
        unordered_map<int,int> mp1;

        for(int i=0;i<n;i++){ // loop runs n times
    
            mp1[a[i]]++;
        }
    
        for(int i=0;i<m;i++){ // loop runs n times
    
           if(mp1[b[i]]>0){
               ans.push_back(b[i]); 
               mp1[b[i]]=0;
           }
    
    
        }  
        
        return ans;
    }



int main(){

    // no duplicates allowed in ans

    vector<int> arr1={3,3,5,2,6,9,7,7};
    
    vector<int> arr2={3,3,6,17,7,2,20,7,25};
    

    printVector(arr1);
    printVector(arr2);

    vector<int> ans= intersectionArray1(arr1,arr2,arr1.size(),arr2.size());

    printVector(ans);


return 0;
}