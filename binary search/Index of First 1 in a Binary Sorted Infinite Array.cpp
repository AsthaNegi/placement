#include<bits/stdc++.h>
using namespace std;








int firstOccurence(vector<int> &v,int start,int end,int x){


    int index=-1;

    while(start<=end){
    
    int mid=start+(end-start)/2; // to avoid overflow
    
    if(v[mid]==x){
    
    index=mid;
    end=mid-1;
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





int positionInfinite(vector<int> &v,int x){

    int start=0;
    int end=1;

    while(x>v[end]){
        
        start=end;
        end=2*end;
        
    }

    int index =firstOccurence(v,start,end,x);

    return index;

}


int infiniteSortedFirstOccurence(vector<int> &v){


int index=positionInfinite(v,1);
return index;



}


int main(){


return 0;
}