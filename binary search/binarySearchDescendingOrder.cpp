#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &v,int x){


int start=0;
int end=v.size()-1;

while(start<=end){
 
 int mid=start+(end-start)/2; // to avoid overflow
 
 if(v[mid]==x){
   
   return mid;
 }
 else if(x<v[mid]){
   start=mid+1;
 }
 else if(x>v[mid]){
    end=mid-1;
 }

}

return -1;

}


int main(){


return 0;
}