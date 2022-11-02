#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> &v,int n){

for(int i=0;i<n;i++){

    cout<<v[i]<<" ";
}cout<<endl;


}

int kthSmallest1(vector<int> &v,int k){
//through sorting

if(k>v.size()){  //edge case
    cout<<"invalid input";
}

sort(v.begin(),v.end());

return v[k-1];

}

//TC: nlogn
//SC: O(1)


int kthSmallest2(vector<int> &v,int k){
 //through heap

if(k>v.size()){  //edge case
    cout<<"invalid input";
}
 
priority_queue<int>maxh;

for(int i=0;i<v.size();i++){

    maxh.push(v[i]);
    
    if(maxh.size()>k){
        maxh.pop();   // popping when elemnts in max heap exceeds k
    }

}

return maxh.top();



}

//TC: nlogk  //since we are never allowing elements inside heap to exceed k
//SC: O(k)  // heap to store k elements




int main(){

vector<int>v={3,65,12,2,11}; 
printVector(v,v.size());

cout<<kthSmallest2(v,4);





return 0;
}