/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Online C++ compiler to run C++ program online

#include<bits/stdc++.h>

using namespace std; 


void insert(vector<int> &v,int temp){
    
    //base

    // if recieved element 'temp' is greater than last elmemnt of array or array size becomes zero, insert the element 
    if(v[v.size()-1]<=temp|| v.size()==0){
        
        v.push_back(temp);
        return;
    }
    
    //hypo
    int val=v[v.size()-1]; // otherwise popping the last element storing it
    v.pop_back();
    insert(v,temp);// calling for smaller input( trying to find the righjt position in array for received element temp)
    
    // insert function will return sorted array with tempt inserted at right place
    //induction
    v.push_back(val); // pushing back the last elment val
    
    
}


void sort1(vector<int> &v){
    
    //sorting this vector
    
   //base 
    if(v.size()==1){ // single element is sorted by it's own
        return;
    }
    
    //hypo
    int temp=v[v.size()-1]; // storing last element of array
    v.pop_back(); // poping last element out
    sort1(v); // calling for smaller input

    // this will return the smaller array in sorted order
    
    //induction
    
    insert(v,temp); //this will insert the last element in right place
     
    
}




int main() {
    // Write C++ code here
    
    vector<int> v={4,90,44,2,0,11};
    
    //calling sort function
    sort1(v);
    
    for(int i=0;i<v.size();i++){
        
        cout<<v[i]<<" ";
    }
    
    

    return 0;
}


