#include<bits/stdc++.h>
using namespace std;



//----------first approach
//searching
//TC:O(n)
//SC:O(1)



int largest1(vector<int> &arr, int n)
    {
        //
        int Max=INT_MIN;
        
        for(auto &val:arr){
            
            Max=max(val,Max);
        }
        
        return Max;
        
    }



//---------second approach
//sorting
//TC: nlogn
//SC: O(n)

int largest(vector<int> &arr, int n)
    {
        //Sorting
        
        sort(arr.begin(),arr.end());
        
        return arr[arr.size()-1];
        
    }    



int main(){


return 0;
}