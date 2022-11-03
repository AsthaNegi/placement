#include<bits/stdc++.h>
using namespace std;


void printVector(vector<int> &v){

    for(int i=0;i<v.size();i++){

        cout<<v[i]<<" ";

    }cout<<endl;


}

vector<int> kFrequent(vector<int> &v,int k){

// we need to count frequencies

unordered_map<int,int>mp;

for(int i=0;i<v.size();i++){
    
  mp[v[i]]++;    

}  // now we have frequencies

// min heap since top elements

priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minh;

for(auto it=mp.begin();it!=mp.end();it++){

    minh.push({it->second,it->first});

    if(minh.size()>k){    
        minh.pop();
    }
}  // k frequent elements 

vector<int>ans;

while(!minh.empty()){
    
    pair<int,int>pp=minh.top();
    ans.push_back(pp.second);

    minh.pop();
}


return ans;

}


int main(){

vector<int>v={3,65,3,12,12,12,12,2,2,3}; // 12,3
int k=2;

printVector(v);

vector<int> ans=kFrequent(v,k);

printVector(ans);

return 0;
}