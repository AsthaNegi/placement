#include<bits/stdc++.h>
using namespace std;


void printVector(vector<int> &v){

    for(int i=0;i<v.size();i++){

        cout<<v[i]<<" ";

    }cout<<endl;


}


vector<int> frequencySorted(vector<int> &v){



unordered_map<int,int>mp;

for(int i=0;i<v.size();i++){

    mp[v[i]]++;

}//nlogn

// now we want highest frequencies at top so max heap 
// but if frequencies are same we want smaller element to be first therefore multiply second elemnt of pair by -1

priority_queue<pair<int,int>>maxh;

for(auto it=mp.begin();it!=mp.end();it++){
   
   maxh.push({it->second,(it->first)*-1});
   
}  // now max frequencies are at top

vector<int>ans;


while(maxh.size()>0){

pair<int,int>pp=maxh.top();    

while(pp.first!=0){
 ans.push_back(-1*pp.second);
 pp.first--;
} 


maxh.pop();

}


return ans;
 
}


int main(){

vector<int>v={1,2,2,1,1,4,3}; 

printVector(v);

vector<int>ans=frequencySorted(v);

printVector(ans);

return 0;
}