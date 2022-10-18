#include<bits/stdc++.h>
using namespace std;


// for printing array
void printArray(vector<int> v){ // since vector is passed without reference therefore copying of vector is happening //O(n)
  

for(auto &val:v){   //O(n)

    cout<<val<<" "; 
}

cout<<endl;


}

void insertionSort(vector<int> &v){

 for(int i=1;i<=v.size()-1;i++){  //O(n)
    
    int key=v[i];  //O(1)
    int j=i-1;     //O(1)

    while(j>=0 && v[j]>key){   //O(n-1)
        v[j+1]=v[j];
        j--;
    }

    v[j+1]=key; //O(1)
    

   
 }



}  //O(n*(n-1))=O(n^2)



int main(){


vector<int>v={67,45,3,12,90}; //O(1)

printArray(v);//O1

insertionSort(v);//O1

printArray(v);//O1

return 0;//O1
}

