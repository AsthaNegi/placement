#include<bits/stdc++.h>
using namespace std;

// for printing array
void printArray(vector<int> v){ // since vector is passed without reference therefore copying of vector is happening //O(n)
  

for(auto &val:v){   //O(n)

    cout<<val<<" "; 
}

cout<<endl;


}

void swap(int &a,int &b){

    int temp=a;
    a=b;
    b=temp;
}

void selectionSort(vector<int> &v){

// v={67,45,3,12,90}

for(int i=0;i<v.size()-1;i++){ // for passes

     int indexOfMin=i;

     for(int j=i+1;j<=v.size()-1;j++){  // for comparison in each pass
         
          if(v[j]<v[indexOfMin]){

              indexOfMin=j;

          }

     }

     swap(v[indexOfMin],v[i]);
     

}



}



int main(){


vector<int>v={67,45,3,12,90}; //O(1)

printArray(v);//O1

selectionSort(v);//O1

printArray(v);//O1


return 0;
}