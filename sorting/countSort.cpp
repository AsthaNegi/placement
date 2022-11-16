#include<bits/stdc++.h>
using namespace std;


// for printing array
void printArray(vector<int> v){ // since vector is passed without reference therefore copying of vector is happening //O(n)
  

for(auto &val:v){   //O(n)

    cout<<val<<" "; 
}

cout<<endl;


}

void countSort(vector<int> &v){

int maxi=INT_MIN;

for(auto &val:v){

  maxi=max(maxi,val); // max num from entire v 

}

// we have maximum no now

vector<int>countArray(maxi+1); // a new array til index of max element filled with 0s

for(auto &val:v){
   
   countArray[val]++; //increment in count according to nums present in v

}


int k=0; //counter for refilling elements in v

for(int i=0;i<countArray.size();i++){
   
   if(countArray[i]==0){ // if 0 then simply move ahead
    continue;
   }
   else{

     while(countArray[i]>0){  // we fill elements till 0 is reached

       // temp.push_back(i);
        v[k]=i;
        k++;
        countArray[i]--;

      }

     }

}



}




int main(){


vector<int>v={67,45,3,12,90}; //O(1)

printArray(v);//O1

countSort(v);//O1

printArray(v);//O1


return 0;
}