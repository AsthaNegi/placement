#include<bits/stdc++.h>
using namespace std;

void printNos(int N)
    {
        
        //base
        if(N==0){
            return;
        }
        
        //hypo
        
        printNos(N-1);
        cout<<N<<" ";
        
        
    }


int main(){

int n;
cin>>n;

printNos(n);


return 0;
}