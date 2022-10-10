#include<bits/stdc++.h>
using namespace std;

bool palindrom(int num){
  
  int realnum=num;
  int rev=0;

  while(num!=0){
    
    rev*=10;
    rev+=num%10;
    num= num/10;

  }

  if(realnum==rev){
    return true;
  }
  else{
    return false;
  }

 
}

int main(){

int num;
cin>>num;


cout<<palindrom(num);

return 0;
}