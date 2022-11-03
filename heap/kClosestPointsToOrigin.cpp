#include<bits/stdc++.h>
using namespace std;

void print2DArray(vector<vector<int>> &v){

    for(int i=0;i<v.size();i++){  // for rows

        for(int j=0;i<v[0].size();j++){  // for col
         
         cout<<v[i][j]<<" ";

        }cout<<endl;
    }

    cout<<endl;


}

vector<vector<int>> kClosest(vector<vector<int>> &v,int k){

// max heap


priority_queue<pair<int,pair<int,int>>>maxh;

for(int i=0;i<v.size();i++){  // we will iterate all the rows

 int dis=v[i][0]*v[i][0]+v[i][1]*v[i][1];

 pair<int,int>points={v[i][0],v[i][1]};

 maxh.push({dis,points});

 if(maxh.size()>k){

    maxh.pop();
 }

}  // k closest points to origin remain

vector<vector<int>>ans;

while(maxh.size()>0){
  
  pair<int,pair<int,int>>pp=maxh.top();

  pair<int,int>point=pp.second;
  int x=point.first;
  int y=point.second;
  vector<int> row={x,y};
  ans.push_back(row);

  maxh.pop();


}

return ans;


}


int main(){







return 0;
}