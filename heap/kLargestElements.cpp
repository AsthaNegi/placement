#include<bits/stdc++.h>
using namespace std;


void printVector(vector<int> &v){

for(int i=0;i<v.size();i++){

    cout<<v[i]<<" ";
}cout<<endl;


}


vector<int> kLargest1(vector<int> &v,int k){
// through sorting

vector<int>ans;

sort(v.begin(),v.end());

for(int i=(v.size()-k);i<v.size();i++){

ans.push_back(v[i]);

}

return ans;


}

//TC: nlogn
//SC: O(1)

vector<int> kLargest2(vector<int> &v,int k){
// through heap

// min heap
priority_queue<int,vector<int>,greater<int>>minh;



for(int i=0;i<v.size();i++){  // loop runs n times

    minh.push(v[i]);  // logk for insertion since heap atlmost contains k elements

    if(minh.size()>k){
        minh.pop();   
    }
}  // nlogk


vector<int>ans;

while(!minh.empty()){  // k times
   ans.push_back(minh.top());
   minh.pop();
}

return ans;

} 

// TC: nlogk
//SC: O(k) to store k elements in heap

int main(){

vector<int>v={3,65,12,2,11}; 
printVector(v);

vector<int>ans=kLargest2(v,2);

printVector(ans);


return 0;
}