#include<bits/stdc++.h>
using namespace std;


int reverseNum(int num){
   
   int reverse=0;

   while(num!=0){
     
     reverse*=10;
     reverse+=num%10;
     num/=10;

   }

   return reverse;
    
}

// reverse a number
int main(){


int num;
cin>>num;

cout<<reverseNum(num);

return 0;
}