#include<bits/stdc++.h>
using namespace std;


int binarySearch(vector<int> &v,int start,int end,int x){


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

void positionInInfinite(vector<int> &v,int x){

    int start=0;
    int end=1;

    while(x>v[end]){
        
        start=end;
        end=2*end;
        
    }

    int index =binarySearch(v,start,end,x);

}


int main(){


return 0;
}