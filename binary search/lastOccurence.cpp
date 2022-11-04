#include<bits/stdc++.h>
using namespace std;



int lastOccurence(vector<int> &v,int x){


int start=0;
int end=v.size()-1;

int index=-1;

while(start<=end){
 
 int mid=start+(end-start)/2; // to avoid overflow
 
 if(v[mid]==x){
   
   index=mid;
   start=mid+1;
 }
 else if(x<v[mid]){
    end=mid-1;
 }
 else if(x>v[mid]){
    start=mid+1;
 }

}

return index;

}






int main(){


return 0;
}

