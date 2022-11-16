#include<bits/stdc++.h>
using namespace std;

string countSort(string arr){
        
        int n=arr.size();
        
       vector<int>count(26,0);
       
       for(int i=0;i<n;i++){
           
           count[arr[i]-'a']++;
       }
       
       for(int i=1;i<=25;i++){
           
           count[i]+=count[i-1];
       }
       
       
       string s(arr.size(),' ');
       
       for(int i=0;i<arr.size();i++){
           
           int x=--count[arr[i]-'a'];
           s[x]=arr[i];
           
       }
       
       return s;
        
        
}




int main(){


return 0;
}