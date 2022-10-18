#include<bits/stdc++.h>
using namespace std;


// for printing array
void printArray(vector<int> v){
  

for(auto val:v){

    cout<<val<<" ";
}

cout<<endl;


}

void swap(int &a,int &b){
   
   int temp=a;
   a=b;
   b=temp;

}

// buuble sort
void bubbleSort(vector<int> &v){

  for(int i=0;i<v.size()-1;i++){  // for number of passes
      
       for(int j=0;j<v.size()-1-i;j++){ //comparision in each pass

          if(v[j]>v[j+1]){
            
            swap(v[j],v[j+1]);// swapping if first element is greater than element ahead of it
          }

       }


  }

}


int main(){

vector<int> v={23,67,3,18,55};

printArray(v);

bubbleSort(v);

printArray(v);



return 0;
}