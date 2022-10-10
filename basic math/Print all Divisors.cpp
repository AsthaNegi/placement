#include<bits/stdc++.h>
using namespace std;

void divisor(int num){

for(int i=1;i<=num;i++){

    if(num%i==0){
        cout<<i<<",";
    }
}



}

int main(){
int num;
cin>>num;

divisor(num);

return 0;
}