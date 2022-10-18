#include<bits/stdc++.h>
using namespace std;


// recursive approach 1
void reverseArray3(vector<int> v){
    

    //base
    if(v.size()==1){
        cout<<v[0]<<" ";
        return;
    }
    
    //induction
    int temp=v[v.size()-1];
    v.pop_back();
    

    //hypo
    cout<<temp<<" ";
    reverseArray3(v);
    

}

// recursive approach 2
void reverseArray4(vector<int> &v,int start,int end){
    

   if(start<end){
    swap(v[start],v[end]);
    reverseArray4(v,start+1,end-1);
   }
    

}



int main(){

vector<int> v={1,2,3,4,5};  

reverseArray4(v,0,4);


return 0;
}