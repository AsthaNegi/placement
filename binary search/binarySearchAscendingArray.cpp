#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> &v){

    for(int i=0;i<v.size();i++){

        cout<<v[i]<<" ";
    }cout<<endl;

}

int binarySearch(vector<int> &v,int x){


int start=0;
int end=v.size()-1;

while(start<=end){
 
 int mid=start+(end-start)/2; // to avoid overflow
 
 if(v[mid]==x){
   
   return mid;
 }
 else if(x<v[mid]){
    end=mid-1;
 }
 else if(x>v[mid]){
    start=mid+1;
 }

}

return -1;

}

//TC: logn  // with base 2

int main(){


return 0;
}