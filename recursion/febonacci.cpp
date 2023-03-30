#include<bits/stdc++.h>
using namespace std;


//using loops

long long int nthFibonacci1(long long int n){
        // code here
        long long febo[n];
        const unsigned int M = 1000000007;
        febo[0]=1;
        febo[1]=1;
        
        for(long long i=2;i<n;i++){
            
            febo[i-1]%=M;
            febo[i-2]%=M;
            febo[i]=(febo[i-1]+febo[i-2])%M;
            
        }
        
        return febo[n-1];
    }



// using recursion 
// will throw TLE 

int febo(int n){
    if(n<=1){
        return 1;  // for series 0 1 1 2 3 5 
    }

    return febo(n-1)+febo(n-2);
}
// TC : 2^n

int main(){


return 0;
}