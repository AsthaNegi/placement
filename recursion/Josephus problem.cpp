/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include<bits/stdc++.h>

using namespace std;


void solve(vector<int> v,int k,int index,int &ans ){
    
   //base
   if(v.size()==1){
       
       ans=v[0];// the last element will be surving member
       cout<<ans;
       return;
   }
   
   //hypo
   int n=v.size(); // size of vector

   index=(index+k)%n;// for circular rotation

   v.erase(v.begin()+index); // the member at index position is deleted
   
   solve(v,k,index,ans);// recursion
   
    
}

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    
    vector<int>v;
    
    for(int i=1;i<=n;i++){
        v.push_back(i); // all member from 1 to n are filled in array
    }
    
    k=k-1; // member at k-1 position is always deleted 
    
    int index=0;// the counting starts at 0 index
    
    int ans=-1;
    
    solve(v,k,index,ans);

    return 0;
}
