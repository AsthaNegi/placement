#include<bits/stdc++.h>
using namespace std;



vector<int> binarySearch(vector<int> &v,int x){


int start=0;
int end=v.size()-1;

while(start<=end){
 
 int mid=start+(end-start)/2; // to avoid overflow
 
 if(v[mid]==x){
   
   continue;
 }
 else if(x<v[mid]){
    end=mid-1;
 }
 else if(x>v[mid]){
    start=mid+1;
 }

}

vector<int>points;

points={start,end};

return points;

}




int minimumDifferenceElement(vector<int> &v,int x){
// if element x is not present in the array

vector<int>points=binarySearch(v,x);

int start=points[0];
int end=points[1];

int diff1=abs(v[start]-x);
int diff2=abs(v[end]-x);

if(diff1<diff2){
    return v[start];
}
else{
    return v[end];
}

}






int main(){


vector<int>v={2,13,14,25,37,39};
int x=23;

int ans=minimumDifferenceElement(v,x);

cout<<ans;

return 0;
}