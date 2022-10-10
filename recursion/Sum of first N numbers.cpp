#include<bits/stdc++.h>
using namespace std;

long long sum=0;

long long sumN(int N){

  if(N==0){
    return sum; //base
  }

  sum+=N;//induction

  sumN(N-1); //hypo


}


int main(){

cout<<sumN(6);

return 0;
}