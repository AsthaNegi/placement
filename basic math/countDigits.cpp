#include<bits/stdc++.h>
using namespace std;

//count the number of digits in a number

int countDigits(int num){
  int count=0;
    while(num!=0){

    num/=10;
    count++;
    }

return count;

}

int main(){

int num;
cin>>num;
cout<<countDigits(num);

return 0;
}